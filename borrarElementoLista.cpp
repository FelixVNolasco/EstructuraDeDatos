#include <iostream>
#define TAM 10
using namespace std;
int main(){
	
	cout << "El arreglo en lista es: \n" << endl;
	int arreglo[10];
	arreglo[0] = 0;
	arreglo[1] = 2;
	arreglo[2] = 3;
	arreglo[3] = 4;
	arreglo[4] = 5;
	arreglo[5] = 6;
	arreglo[6] = 7;
	arreglo[7] = 8;
	arreglo[8] = 9;
	arreglo[9] = 10;
	arreglo[10] = 11;
	
	if ( arreglo[0] == 0){
		
		cout << "La lista esta vacia" << endl;
	
	}
	for( int i = 0; i <11; i ++)
	{
			cout <<arreglo [i] << "\n" << endl;
	}
}
