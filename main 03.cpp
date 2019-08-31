#include <iostream>
#include <conio.h>

using namespace std;
struct comida{
	char sabor[20];
	int cantidad;
	char direccion [20];
	
};

struct restaurante{
	char nombre [20];
	int mesero;
	float propina;
	struct comida comi;
};

int main(int argc, char** argv) {
	struct restaurante R1[6];
	struct restaurante *apuntador;
	apuntador=&R1[0];
	
	cout<<".::Bienvenido a estructura::."<<endl;
	
	for (int i=0; i<2; i++){
		cout<<"Ingresa el nombre del restaurante: "<<endl;
		cin.getline(R1[i].nombre,20);
		cout<<"Ingresa el numero de meseros que necesitas: "<<endl;
		cin>>R1[i].mesero;
		cout<<"Ingresa la propina que deseas dejar: "<<endl;
		cin>>R1[i].propina;
		cout<<"Ingrese el sabor de su comida: "<<endl;
		fflush(stdin);
		cin.getline(R1[i].comi.sabor,20);
		
		system("pause");	
	}
	
	
	getch();
	cout<<"***Mostrar los datos guardados***"<<endl;
	cout<<endl<<"Nombre del restaurante: "<<apuntador->nombre;
	cout<<endl<<"Numero de meseros: "<<R1[0].mesero;
	cout<<endl<<"Propina a dejar: "<<R1[0].propina;
	cout<<endl<<"Sabor de la comida: "<<R1[0].comi.sabor;
	
	system("pasue");
	cout<<"***Mostrar los datos guardados***"<<endl;
	cout<<endl<<"Nombre del restaurante: "<<apuntador->nombre;
	cout<<endl<<"Numero de meseros: "<<R1[1].mesero;
	cout<<endl<<"Propina a dejar: "<<R1[1].propina;
	cout<<endl<<"Sabor de la comida: "<<R1[1].comi.sabor;
	
	return 0;
	
}
