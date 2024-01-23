#include <iostream>
#include <string>
using namespace std;

struct datos {
    string nombre;
    string pais;
};

struct atleta {
	string deporte;
	string medals;
	struct datos datospers;
	
};

int main() {
    const int nro_atletas = 2; // Tamaño del array "ATS"
    atleta ATS[nro_atletas];
    
    // Pedimos al usuario que ingrese los datos de los atletas
    for (int i = 0; i < nro_atletas; i++) {
        cout << "Atleta " << i+1 << ":" << endl;
        cout << "Nombre: ";
        cin >> ATS[i].datospers.nombre;
        cout << "Pais: ";
        cin >> ATS[i].datospers.pais;
        cout << "Deporte: ";
        cin >> ATS[i].deporte;
        cout << "Medallas: ";
        cin >> ATS[i].medals;
        cout << endl;
    }
    
    // Inicializamos el índice del atleta con mayor número de medallas
    int indiceMayormedallas = 0;
    
    // Recorremos el array para encontrar el atleta con más medallas
    for (int i = 1; i < nro_atletas; i++) {
        if (ATS[i].medals > ATS[indiceMayormedallas].medals) {
            indiceMayormedallas = i;
        }
    }
    
    // Imprimimos los datos del atleta con más medallas
    cout << "El atleta con mas medallas es: " << endl;
    cout << "Nombre: " << ATS[indiceMayormedallas].datospers.nombre << endl;
    cout << "Pais: " << ATS[indiceMayormedallas].datospers.pais << endl;
    cout << "Deporte: " << ATS[indiceMayormedallas].deporte << endl;
    cout << "Medallas: " << ATS[indiceMayormedallas].medals << endl;
    
    return 0;
}




