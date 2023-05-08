#include <iostream>
using namespace std;

// Variables globales
int **matriz = NULL;
int filas, columnas;

// Leer entero positivo
int leerEnteroPositivo(string etiqueta){
	int valor;
	do{
		cout << etiqueta; cin >> valor;
		if(valor<=0){
			cout << "Error, debe ingresar un valor positivo.!!\n";
		}
	} while(valor<=0);
	return valor;
}

// Mostrar Matriz
void mostrarMatriz () {
	for (int i =0; i < filas; i++) {
		cout << "Fila " << i << ": " ;
		for (int j=0; j < columnas; j++) {
			cout << matriz[i][j] << " ";
		}
		cout << endl;
	}
}

void limpiarMemoria(){
	// Validar
	if(matriz==NULL) return;
	// Liberación de la memoria
	for( int i=0; i<filas; i++ )
	  delete[] matriz[i];
	delete[] matriz;
}

// Mostrar menu
void mostrarMenu(){
	system("cls");
	cout << "MENU" << endl;
	cout << "-------------------------------" << endl;
	cout << "1.- Generar natriz" << endl;
	cout << "2.- Suma de filas" << endl;
	cout << "3.- Suma de columnas" << endl;
	cout << "4.- Suma de triangulas superior" << endl;
	cout << "5.- Salir" << endl;
	cout << "-------------------------------" << endl;
}

// Leer opcion de menu
int leerOpcion(string etiqueta){
	int op;
	do{
		cout << etiqueta; cin >> op; 
		if(op<1 || op>5){
			cout << "Opcion incorrecta, intentelo nuevamente!!\n";
		}
	} while(op<1 || op>5);
	return op;
}

// Menu 01
void menu01(){
	// Lectura de datos
	system("cls");
	cout << "MENU - Opcion 1" << endl;
	cout << "-------------------------------" << endl;
	filas = leerEnteroPositivo("Filas: ");
	columnas = leerEnteroPositivo("Columnas: ");
	// Proceso
	limpiarMemoria();
	matriz = new int*[filas];
	for( int i=0; i<filas; i++ )
  		matriz[i] = new int[columnas];
	// llenar matriz
	for(int i=0;i<filas;i++) {
		for(int j=0;j<columnas;j++)
			matriz[i][j] = rand() % 50 + 1;
	}
	// Reporte
	mostrarMatriz();
}

// Menu 02
void menu02(){
	// Control
	if(matriz==NULL) return;
	// Variables
	int* sumaFilas = new int[filas];
	// Proceso
	for(int i=0; i<filas; i++){
		sumaFilas[i] = 0;
		for(int j=0; j<columnas;j++){
			sumaFilas[i] += matriz[i][j];
		}
	}
	// Reporte
	mostrarMatriz();
	for(int i=0;i<filas;i++){
		cout << "Fila " << i << ": " << sumaFilas[i] << endl;
	}
}

// Menu 03
void menu03(){
	// Control
	if(matriz==NULL) return;
	// Variables
	int* sumaColumnas = new int[columnas];
	// Proceso
	for(int i=0; i<columnas; i++){
		sumaColumnas[i] = 0;
		for(int j=0; j<filas;j++){
			sumaColumnas[i] += matriz[j][i];
		}
	}
	// Reporte
	mostrarMatriz();
	for(int i=0;i<columnas;i++){
		cout << "Columnas  " << i << ": " << sumaColumnas[i] << endl;
	}
}


// Menu 04
void menu04(){
	// Control
	if(filas!=columnas || filas==0 || columnas==0){
		cout << "La matriz debe ser cuadrada" << endl;
	}
	// Proceso
	int suma = 0;
	for(int i=0; i<filas; i++){
		for(int j=0; j<columnas;j++){
			if(i<=j){
				suma += matriz[i][j];
			}
			
		}
	}
	// Reporte
	mostrarMatriz();
	cout << "\nSuma: " << suma << endl;
}

// Menu 05
void menu05(){
	cout << "Chau" << endl;
}

int main(){
	// Variables del programa
	int op;
	// Inicializar variables
	filas = 0;
	columnas = 0;
	// Control del menú
	do{
		// El menu
		mostrarMenu();
		op = leerOpcion("Opcion:");
		// Ejecutar opcion del menu
		switch(op){
			case 1: menu01(); break;
			case 2: menu02(); break;
			case 3: menu03(); break;
			case 4: menu04(); break;
			case 5: menu05(); break;
		}

		system("pause");
	} while(op!=5);
	// Liberar memoria
	limpiarMemoria();
	return 0;
}
