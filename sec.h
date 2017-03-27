#ifndef SEC_H
#define SEC_H

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Sec {
public:
  Sec(string filename);
  ~Sec();
  string file;
  void makeClassList();
  string newChain(string one, string two);
};
#endif
