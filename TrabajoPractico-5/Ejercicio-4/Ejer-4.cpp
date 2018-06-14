#include <iostream>
#include<fstream>
using namespace std;

struct tipoRegistro {
	char nombre[30];
	int edad;
	float puntaje;
};

int main(void) {
	tipoRegistro rec;				//como lo abro 
	ofstream fsalida("datos.dat", ios::out | ios::binary);
	strcpy_s(rec.nombre, "Jose Luis");
	rec.edad = 32;
	rec.puntaje = 10000;
	fsalida.write((char*)&rec, sizeof(tipoRegistro));
	cout << "Grabando Datos" << endl;
	fsalida.close();

	ifstream fentrada("..\\Ejercicio-4\\datos.dat, ios::in | ios::binary");
	fentrada.read((char*)&rec, sizeof(tipoRegistro));
	cout << "Nombre: " << rec.nombre << endl;
	cout << "Edad: " << rec.edad << endl;
	cout << "Puntaje: " << rec.puntaje << endl;
	fentrada.close();

	cin.get();
	return 0;
}