#ifndef OperacionesH
#define OperacionesH
#include <iostream>
#include <string.h>
#include "Objetos.h"

using std::iostream;

void menu();
void reset();

void menu()
{
	Cola cola;
	char op;
	
	system("cls");
	cout<<"1. Crear documento\n2. Eliminar documento\n3. Imprimir\n4. Salir\nIntroducir una opción: ";
	cin>>op;
	switch(op)
	{
		case '1':
			cola.Encolar();
			reset();
			break;
		case '2':
			cola.Desencolar();
			reset();
			break;
		case '3':
			cola.Imprimir(cola.SetInicio());
			reset();
			break;
		case '4':
			exit(0);
			break;
		default:
			cout<<"Introducir una opcion valida: ";
			system("pause");
			menu();
	}
}

void reset()
{
	char re;
	cout<<"\nDesea volver al menu principal? (S/N): ";
	cin>>re;
	if(re==('s'|'S'))
	{
		menu();
	}
}

#endif
