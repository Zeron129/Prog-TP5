#include<iostream>
#include<fstream>
using namespace std;

int main(void) {
	char cadena[80] = "";
	ifstream fentrada("Ejer-2.cpp");
	while (!fentrada.eof()) {	// eof = end of file
		fentrada.getline(cadena, 80);
		cout << cadena << endl;
	}
	fentrada.close();
	cin.get();
	return 0;
}