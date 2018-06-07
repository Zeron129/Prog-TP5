//------------------------------
#include <iostream>
#include <fstream>
using namespace std;
//------------------------------
int main(void) {
	char cadena[80] = "Hola que tal";
	ofstream fsalida;
	// grabar un archivo de texto
	fsalida.open("archivo.txt");// abrir el archivo
	fsalida << cadena << endl;
	fsalida << "Todo bien" << endl;
	cout << "Gravando en el archivo" << endl;
	fsalida.close();
	//leer un archivo
	ifstream fentrada;
	fentrada.open("..\\Ejercicio-1\\archivo.txt");
	fentrada.getline(cadena, 80);
	cout << cadena << endl;
	fentrada.getline(cadena, 80);
	cout << cadena << endl;
	fentrada.close();
	cin.get();
	return 0;
}