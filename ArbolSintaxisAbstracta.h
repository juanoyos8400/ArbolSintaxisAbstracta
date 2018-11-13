#ifndef __ARBOLSINTAXISABSTRACTA_H
#define __ARBOLSINTAXISABSTRACTA_H
#include <iostream>
#include <string>
#include <list>
using namespace std;

struct Nodo{
	string exp;
	struct Nodo *izq, *der;
};
class ArbolSintaxisAbstracta{

public:
	Nodo arbol;
	bool insertarNodoArbol(Nodo raiz, char *datoInsertar, char *datoPadre, char lado);
	Nodo *CreanrArbol(char a);
	void CrearFuncion(vector<char> a);
	vector <char> ObtenerCadenaFuncion();
	bool DeterminarContenenciaVariables();
	ArbolSintaxisAbstracta EvaluarFuncion(char var, int valor);
	void LimpiarCerosyUnos();
	void DerivarFuncion(int var);
	vector<string> ObtenerListaVariables();
	list ObtenerListaVariables();
	list ObtenerListaSubfunciones();
	~ArbolSintaxisAbstracta();

	
};
Nodo *ArbolSintaxisAbstracta::CreanrArbol(char *a){
	Nodo arbol;
	if(arbol == NULL){

	}
	else{
		arbol->exp = a;
		arbol->izq = NULL;
		arbol->der = NULL;
	}
}
bool ArbolSintaxisAbstracta::insertarNodoArbol(Nodo raiz, char *datoInsertar, char *datoPadre, char lado){
	Nodo aux;
	if (riaz == NULL){

		Nodo padreNew;
		padreNew = CreanrArbol(datoInsertar);
		return true;

	}
	else{
		aux = raiz;
		if(aux->exp == datoPadre){
			if (lado == 'd')
			{
				if(aux->der == NULL){
					Nodo newNodo;
					newNodo=CreanrArbol(datoInsertar);
					aux->der=newNodo;

				}
			}
			else if(lado == 'i'){
				if(aux->izq == NULL){
					Nodo newNodo;
					newNodo=CreanrArbol(datoInsertar);
					aux->izq=newNodo;
				}
			}
		}

	}
}