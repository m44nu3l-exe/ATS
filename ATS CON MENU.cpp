#include <iostream>
#include <string>
using namespace std;

struct datos {
    string nombre;
    string pais;
};//Fin del 1er struct donde se almacenan los datos del atleta.

struct atleta {
	string deporte;
	string medals;
	struct datos datospers;
};//Fin del 2do struct donde se almacenan los datos restantes y se agrega el struct anterior para poder utilizar esos datos.

int main() {
	const int max_ATS = 10; // Este será el tamaño maximo del arrays "ATS" escogido por mi, para no solicitar al usuario escoger la cantidad maxima en caso de que no la sepa.
    atleta ATS[max_ATS]; // Acá se inicializa el arrays, con su numero maximo de atletas.
    int cont_ATS = 0; // Contador de los atletas que se ingresaran
    
    int MENU;//Acá se inicializa el menú
    
    do {
    	//Mostramos el menú
    	cout << "----------MENU----------";
    	cout << "\n";
    	cout << "1. Agregar Atleta [Maximo 10 Atletas]" << endl;
    	cout << "2. Mostrar Atleta con mayor cantidad de medallas" << endl;
    	cout << "3. Salir del programa"<< endl;
    	
    	cout << "Selecciona una opcion: [1], [2],[3]:   ";
    	cin >> MENU;
    	cout << endl;
    	
    	switch (MENU){
    		case 1:
    			//En primera instancia verificamos si ya alcanzo la maxima cantidad de atletas
    			if (cont_ATS< max_ATS){
    				cout << "Atleta " << cont_ATS+1 << ":" << endl;
                    cout << "Nombre: ";
                    cin >> ATS[cont_ATS].datospers.nombre;
                    cout << "Pais: ";
                    cin >> ATS[cont_ATS].datospers.pais;
                    cout << "Deporte: ";
                    cin >> ATS[cont_ATS].deporte;
                    cout << "Medallas: ";
                    cin >> ATS[cont_ATS].medals;
                    cout << endl;
                    cout << "\n";
    				
    				cont_ATS++;	
				} else {
				 cout << "Ha alcanzado el maximo de atletas ingresados." << endl;
				 }
		          break;
		
		    case 2:
		    //Aca se verifica si ya hay atletas ingresados para poder verificar cual es el que posee mayor cantidad de medallas
			if(cont_ATS>0){
				//Inicializamos el índice del atleta con mayor número de medallas
				int IndiceMayorMedallas = 0;
				
				//Verificamos el array para encontrar el atleta con más medallas
				for (int i=1; i < cont_ATS;i++){
					if (ATS[i].medals> ATS[IndiceMayorMedallas].medals){
						IndiceMayorMedallas = i;
						
					}//fin del 2do if
				}//fin del for
				
	// Imprimimos los datos del atleta con más medallas
    cout << "El atleta con mas medallas es: " << endl;
    cout << "Nombre: " << ATS[IndiceMayorMedallas].datospers.nombre << endl;
    cout << "Pais: " << ATS[IndiceMayorMedallas].datospers.pais << endl;
    cout << "Deporte: " << ATS[IndiceMayorMedallas].deporte << endl;
    cout << "Medallas: " << ATS[IndiceMayorMedallas].medals << endl;
    cout << endl;	
			}//Fin del 1er if	
			break;
			
			
			case 3:
				cout << "Saliendo del programa ...." << endl;
				break;
			}//fin del switch
	}while (MENU!=3);
	
	return 0;
	
}//Fin del MAIN
	
	



