#ifndef PAIR_H
#define PAIR_H

#include <string>

using namespace std;

class Pair {
public:
	Pair(string line);
	~Pair();
	void setName(string name);
	void setPair(string one, string two);
	string getName();
	string getPair();
	bool firstUpper(const string word);
	void setChain(string c);
	string wordOne;
	string wordTwo;
	string name;
	string chain;
private:
	
};
#endif
	