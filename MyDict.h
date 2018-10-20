#pragma once

#include <iostream>       // std::cout
#include <vector>
#include <string>


using namespace std;

class MyDict
{
	long GetHash(const string &s) const;
	// try list<string> or vector<string> or whatever you like to store the words. If in doubt, benchmark the difference between collections.
public:
	MyDict() = default;
	~MyDict() = default;

	void ReadDictFromFile(string filename);
	string FindPassword(long luckyHash) const;
};
