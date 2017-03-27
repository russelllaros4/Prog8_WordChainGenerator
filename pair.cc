#include "pair.h"
#include <algorithm>
#include <sstream>
#include <iostream>
#include <string.h>
#include <vector>
#include <stdio.h>

using namespace std;

Pair::Pair(string line) {
	vector<string> pairs;
	istringstream iss(line);
	
	string token;
	while (getline(iss, token,' ')) {
		pairs.push_back(token);
	}
	
	for(unsigned int i=0; i<pairs.size(); ++i){
  		setName(pairs[0]);
  		if(firstUpper(pairs[i]) && i<2){
  			setPair(pairs[i],pairs[i+1]);
  		}
  	}
}

Pair::~Pair(){
}

void Pair::setChain(string c){
	chain = c;
}

void Pair::setName(string n){
	name = n;
}

void Pair::setPair(string one, string two){
	wordOne = one;
	wordTwo = two;
}

string Pair::getName(){
	return name;
}

string Pair::getPair(){
	string pair = wordOne + " " + wordTwo;	
	return pair;
}

bool Pair::firstUpper(const string word) { 
	return word.size() && std::isupper(word[0]); 
}