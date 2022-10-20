#include <iostream>
#include <fstream>

using namespace std;

int main() {

	ifstream inFile;
	inFile.open("InFile.dat");
	if (!inFile)
		cout << "Can't find file" << endl;
	int read;
	inFile >> read;
	cout << read;
}
