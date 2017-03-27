#ifndef CHAIN_H
#define CHAIN_H

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

class Chain {
public:
	Chain(string first, string last);
	~Chain();
	string getChain();
	void addWord(string word);
	void createChain(string first, string last);
	void findLength(int length);
	void getDict();
	bool checkForWord(string check);
	string currentWord;
	string chain;
	vector<string> wordsOfL;
	vector<string> wordList;
	string checkWord;
	string check;
};
#endif
	