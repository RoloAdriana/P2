//main.cpp

//////////////////////////////////////////////////////////////////
// 							Tablas_HASH							//
// 																//
// Hecho por: ADRIANA ROLO INCHAUSTI							//
// Asignatura: Algoritmo y Estructura de Datos Avanzados		//
// 																//		
//////////////////////////////////////////////////////////////////

#include "P1.cpp"

int menu (){

int opc = 0;
 	system("clear");
 	
	cout<< "A continuacion puede introducir como quiere jugar ;). Escoge una opcion"<< endl; 
	cout <<"		1.Cargar tablero desde archivo."<<endl;
	cout <<"		2.Crear un Tablero aleatorio"<<endl;
	cout <<"		3.Salir"<<endl;
	cout <<"opc?";

	cin >> opc; 
	
	return opc; 
}

int main() {

int n = 0, m = 0 ,opc = 0;


opc = menu (); 

	switch (opc){
	
		case 1 : {
			char argv[50];
			cout << "introduzca el nombre del directorio" <<endl; 
			cin >> argv; 

		}
		break;
		
		case 2: {
		
			
		}
		break;
		case 3:{
			
			return 0;
		
		}
		break; 
	}
return 0;
}
