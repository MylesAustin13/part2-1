#include <iostream>
#include <algorithm> //remove:
#include <cctype>
#include <fstream>


using namespace std;
//task a
string removeLeadingSpaces(string line){
  /*{
    line.erase(remove(line.begin(), line.end(), ' '), line.end());
  }*/
  
  //Pros: concise code, does what it should for the most part
  //Cons: Doesn't recognize tabs as spaces

  
  //Here's something that may be a bit simpler:

  string result = ""; //Making a variable instead of modifying the parameter
  int i = 0;
  while(line[i] == ' ' || line[i] == '\t'){
    i++;
  }
  while(i < line.size()){
    result += line[i];
    i++;
  }
  return result;
     
}




//task b;
int countChar(string line, char c){
  int x=0;
  for (int i=0; i<line.length(); i++){ // don't need line.length() - 1, just line.length()
    if (line[i]==c){
      x++;
    }
  }
  return x;
}


 
//For going through a file
void formatCode(std::string inputname){
  ifstream fin(inputname);

  string line; //To hold each line
  string tabstring; //To hold the indentation
  int bracenum = 0; //Block depth
  
  if (fin.fail()) {
    cerr << "File cannot be opened for reading." << endl;
    exit(1); // exit if failed to open the file
  }
  
  getline(fin,line);
  while(line != ""){
    line = removeLeadingSpaces(line);

    bracenum -= countChar(line,'}');
    for(int i = 0; i < bracenum; i++){
      tabstring += "\t";
    }
    bracenum += countChar(line,'{');

    cout << tabstring << line << '\n';
    //output << tabstring << line << '\n';
    tabstring = "";
    getline(fin,line);
  }
  fin.close();
}


