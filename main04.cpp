#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char** argv) {
int arreglo[10],*puntero;
	puntero=&arreglo[0];
	int mayor=INT_MIN;
	
	for(int i=0; i<=9; i++){
	cout<<"Ingrese los valores: "<<i+1<<endl;
	cin>>arreglo[i];
	
	}			

	for(int *puntero=&arreglo[0]; puntero<=&arreglo[9]; puntero++){
		if (*puntero>mayor) mayor=*puntero;

	}
	
	cout<<"El numero mayor es: "<<mayor<<endl;

	
	return 0;
}

