
# Dictionary Attack

Celem ćwiczenia jest odkodowanie 8 literowego słowa, z ciągu znaków: 'acegilmnoprstuwxyz', gdzie wynik funkcji GetHash() jest równy '25157672851591', a funkcja zdefiniowana jest następująco:

``` c++
long GetHash(string s)
{
	long h = 7;
	string someCharacters = "acegilmnoprstuwxyz";

	for (char i : s){
		h = h * 37 + someCharacters.find(i);
	}
	//int charIndex = someCharacters.find("c");
	//int charDoesntExists = someCharacters.find("b"); // returns -1

	return h;
}
```

Zaimplentuj potrzebne metody w klasie MyDict:

```c++
class MyDict
{
	long GetHash(string s) const;
	// You may try plain c or list<string> or vector<string> or whatever you like to store the words. Consider benchmarking the differences between collections.
public:
	MyDict() = default;
	~MyDict() = default;

	void ReadDictFromFile(string filename);
	string FindPassword(long luckyHash) const;
};
```

Dla przykładu, jeżeli chcesz znaleźć 4 literowe słowo, gdzie wynik funkcji
 GetHash() = 13625924, rozwiązaniem zadania jest wyraz 'rano'.


* na potrzeby ćwiczenia nie przejmuj się polskimi znakami.
* wczytany słownik może być wykorzystywany wiele razy, użyj dynamicznej alokacji pamięci do przechowania wyrazów (program nie powinien mieć wycieków pamięci!).
* więcej o funkcjach skrótu: https://pl.wikipedia.org/wiki/Funkcja_skr%C3%B3tu
