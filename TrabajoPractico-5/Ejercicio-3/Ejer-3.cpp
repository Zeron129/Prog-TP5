#include <iostream>
#include <fstream>
using namespace std;

int main(void) {
	char cadena[80] = "";
	ofstream fsalida;
	fsalida.open("..\\Ejercicio-1\\archivo.txt", ios::app);
	fsalida << "agregando informacion al final del archivo" << endl;
	cout << "grabando en el archivo" << endl;
	fsalida.close();
	cin.get();
	return 0;
}