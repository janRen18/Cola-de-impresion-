#ifndef ObjetosH
#define ObjetosH
#include <iostream>
#include <string.h>
#include <windows.h>

using std::string;
using std::cout;
using std::cin;

class Documento
{
	private:
		string Titulo;
		int Paginas;
		string Texto;
		Documento *Sig;
		friend class Cola;
	public:
		Documento();
		~Documento();
		int GetPagina();
		string GetTitulo();
		string GetTexto();
};

Documento::Documento()
{
	Sig++;
	Sig->Titulo=Sig->GetTitulo();
	Sig->Paginas=Sig->GetPagina();
	Sig->Texto=Sig->GetTexto();
}

Documento::~Documento(){}

string Documento::GetTitulo()
{
	string tit;
	
	cout<<"Ingresar texto del documento: ";
	cin.ignore();
	getline(cin, tit);
	
	return tit;
}

int Documento::GetPagina()
{
	int pag;
	
	cout<<"Ingresar pag del documento: ";
	cin>>pag;
	
	return pag;
}

string Documento::GetTexto()
{
	string txt;
	
	cout<<"Ingresar texto del documento: ";
	getline(cin, txt);
	cin.ignore();
	
	return txt;
}

class Cola
{
	private:
		Documento Documentos;
		Cola *Inicio;
		Cola *Final;
	public:
		Cola();
		~Cola();
		Cola* SetInicio();
		void Encolar();
		void Desencolar();
		int Imprimir(Cola *aux);
};

Cola::Cola(){}

Cola::~Cola(){}

Cola* Cola::SetInicio()
{
	return Inicio;
}

void Cola::Encolar()
{
	Documento _Documentos;
	
	Final++;
	Final->Documentos=_Documentos;
}

void Cola::Desencolar()
{
	Cola *_Inicio;
	_Inicio=Inicio+1;
	delete *&Inicio;
	Inicio=_Inicio;
}

void Espera(int i)
{
	if(i==5)
	{
		system("cls");
	}
	else
	{
		cout<<".";
		Sleep(100);
	}
}

int Cola::Imprimir(Cola *aux)
{
	if(aux>Final)
	{
		return 0;
	}
	else
	{
		cout<<"\nImprimiendo pagina "<<aux->Documentos.Paginas;
		int i=0;
		Espera(i);
		Cola::Imprimir(aux++);
	}
}

#endif
