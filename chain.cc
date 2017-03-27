#include "chain.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <cstring>

using namespace std;

Chain::Chain(string first, string last){
	vector<string> wordList;
	getDict();
	string currentWord;
	string chain;
	vector<string> wordsOfL;
	createChain(first, last);
	string checkWord;
	string check;
}

Chain::~Chain(){
}

string Chain::getChain(){
	return chain;
}

void Chain::addWord(string word){
	unsigned int c = -1;
	if(chain.find(word) > c){
		chain += " " + word;
	}
	check = word;
}

void Chain::createChain(string first, string last){
	chain = first;
	findLength(first.length());	
	for(unsigned int i = 0; i < wordsOfL.size(); i++){
	}
	char f[first.length()];
	char l[last.length()];
	for(unsigned int i = 0; i < first.length(); i++){
		f[i] = first[i];
		l[i] = last[i];
	}
	bool check = false;
	checkWord = first;
	currentWord = checkWord;
	string tmp = first;
	int toLong = 0;
	string tmp2;
	while(check == false){
		for(unsigned int i = 0;i<first.length();i++){		
			checkWord[i] = l[i];
			if(checkForWord(checkWord)){
				currentWord = checkWord;
				addWord(checkWord);
				tmp = checkWord;
			} else {
				checkWord = tmp;
			}
			if(currentWord == last){
				break;
			} 
		}
		if(checkWord == last){
			check = true;
		}
		if(toLong == 10){
			check = true;
			addWord("error");
		}
		toLong++;
	}	
}

bool Chain::checkForWord(string word){
	bool check = false;
	for(unsigned int i = 0;i<wordsOfL.size();i++){
		if(word == wordsOfL[i]){
			check = true;
		}	
	}
	return check;
}

void Chain::findLength(int length){
	string word;
	unsigned int j = (unsigned int)length;
	for(unsigned int i = 0;i < wordList.size(); i++) {
		word = wordList[i];
		if(word.length() == j) {
			wordsOfL.push_back(word);
		}
	}	
}

void Chain::getDict(){
	ifstream in("words");
	string line;
	if(in.is_open()){
    	while(getline(in,line)){
      		wordList.push_back(line);
    	}
    	in.close();
	}
}