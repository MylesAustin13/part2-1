#include <iostream>
#include "funcs.h"


using namespace std;

int main(){
  string line;
  getline(cin, line);
  
  //I added endl's to make it seem a bit nicer
  
  cout<<removeLeadingSpaces(line)<<endl;
  cout<<countChar(line,'a')<<endl;

  formatCode("bad-code.cpp");
  return 0;

  }
