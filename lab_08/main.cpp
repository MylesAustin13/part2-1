#include <iostream>
#include "funcs.h"


using namespace std;

int main(){
  string line;
  getline(cin, line);
  cout<<removeLeadingSpaces(line);
  return 0;

  }
