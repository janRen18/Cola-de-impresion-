#ifndef ObjetosH
#define ObjetosH
#include <iostream.h>
#include <string.h>

using namespace std::string;
using namespace std::cout;
using namespace std::cin;

class Documento
{
	private:
		string Titulo;
		int Paginas;
		string Texto;
		Documento *Sig;
		friend Cola;
	public:
		Documento();
		~Documento();
		int GetPagina();
		string GetTitulo();
		string GetTexto();
};

Documento::Documento()
{
	Titulo=Documento::GetTitulo();
	Paginas=Documento::GetPagina();
	Texto=Documento::GetTexto();
}

Documento::~Documento(){}

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
	cin>>txt;
	
	return txt;
}

string Documento::GetTitulo()
{
	string tit;
	
	cout<<"Ingresar texto del documento: ";
	cin>>tit;
	
	return tit;
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
		void Encolar(Cola *_Final);
		void Desencolar();
		void Imprimir(bool Personalizar);
		void Imprimir(Cola *aux);
		void Imprimir(Cola *Acumulador=NULL, int Pagina, int NoDocumento);
};

Cola::Cola(){}

Cola::~Cola(){}

void Cola::Encolar(Cola *_Final)
{
	Documento _Documentos;
	
	Final=_Final+1;
	Final->Documentos=_Documentos.Documento();
}

void Cola::Desencolar()
{
	Cola *_Inicio;
	_Inicio=Inicio+1;
	delete *&Inicio;
	Inicio=_Inicio;
}

void Cola::Imprimir(bool Personalizar)
{
	switch(Personalizar)
	{
		case false:
			Cola::Imprimir(Cola *aux);
		case true:
			Cola::Imprimir(Cola *Acumulador=NULL, int Pagina, int NoDocumento);
	}
}

void Cola::Imprimir(Cola *aux)
{
	if(aux-1>Final)
	{
		return 0;
	}
	else
	{
		cout>>aux->Documentos;
		aux++;
		Cola::Imprimir(aux);
	}
}

void Cola::Imprimir(Cola *Acumulador=NULL, int Pagina, int NoDocumento)
{
	if(Acumulador=)
	{
		return 0;
	}
	else
	{
		
	}
}

#endif
