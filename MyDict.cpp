#include "MyDict.h"

inline long MyDict::GetHash(const string &s) const
{
	long h = 7;
	const string someCharacters = "acegilmnoprstuwxyz";

	for (char i : s){
		h = h * 37 + someCharacters.find(i);
	}
	//int charIndex = someCharacters.find("c");
	//int charDoesntExists = someCharacters.find("b"); // returns -1

	return h;
}
