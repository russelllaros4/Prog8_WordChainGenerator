#include "sec.h"
#include "pair.h"
#include "chain.h"
#include <iostream>
#include <fstream>
#include <vector>


Sec::Sec(string filename){
	makeClassList();
}

Sec::~Sec(){}

void Sec::makeClassList(){
	vector<Pair> pairList;
	vector<string> chainList;
	ifstream in("classwords.txt");
	string line;
	int i = 0;
	if(in.is_open()){
	  while(getline(in,line)){	
	  	Pair p(line);
	    pairList.push_back(p);
	    string chain = newChain(pairList[i].wordOne, pairList[i].wordTwo);
  		if (chain.find("error") < 1000){
    		chain = "Invalid Chain";
    	}
	    chainList.push_back(pairList[i].getName() + " " + chain);
	    cout << chainList[i] << endl;
	    i++;
	  }
	  in.close();
	}
}

string Sec::newChain(string one, string two){
	Chain c(one, two);
	return c.getChain();
}