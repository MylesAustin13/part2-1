#include <iostream>
#include <algorithm> //remove:

using namespace std;
//task a
string removeLeadingSpaces(string line){
{
    line.erase(remove(line.begin(), line.end(), ' '), line.end());
  }
 return line;
     
}
/*
//task b;
int countChar(string line, char c){
  int x=0;
  for (int i=0; i<line.length()-1; i++){
    if (line[i]==c){
      x++;
	}
  }
  return x;
}


 
*/

