#include <ctime>

#include "MyDict.h"
using namespace std;

int main()
{
	long luckyHash = 25157672851591;
	string filename = "slownikPL.txt";  // for tests, use slownikTestowy.txt

	clock_t start;
	start = std::clock();

	MyDict myDict;
	myDict.ReadDictFromFile(filename);

	cout << "test:" << myDict.FindPassword(13625924) << endl; // answer: rano
	string password = myDict.FindPassword(luckyHash);
	cout << "password id:" << password << endl;

	double duration = (std::clock() - start) / (double)CLOCKS_PER_SEC;
	cout << " \n duration: " << duration << " [s] = " << duration / 60 << " min" << endl;

	system("pause");
	return 0;
}
