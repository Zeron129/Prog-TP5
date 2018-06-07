#include <iostream>
#include<fstream>
using namespace std;

struct tiempoRegistro {
	char nombre[30];
	int edad;
	float puntaje;
};

int main(void) {
	tiempoRegistro rec;
	ofstream fsalida("datos.dat", ios::out | ios::binary);
	strcpy(rec.nombre, "Jose Luis");
	rec.edad = 32;
	rec.puntaje = 10000;
	fsalida.write((char*)&rec, sizeof(tiempoRegistro));
	cout << "Grabando Datos" << endl;
	fsalida.close();

	ifstream fentrada("..\\Ejercicio-4\\datos.dat, ios::in | ios::binary");
	if (fentrada.good()) {
		fentrada.read()
	}





	cin.get();
	return 0;
}