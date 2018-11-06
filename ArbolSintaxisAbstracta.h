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
	struct Nodo *a;

	ArbolSintaxisAbstracta();
	void CrearFuncion(vector<string> a);
	vector <string> ObtenerCadenaFuncion();
	bool DeterminarContenenciaVariables();
	ArbolSintaxisAbstracta EvaluarFuncion(char var, int valor);
	void LimpiarCerosyUnos();
	void DerivarFuncion(int var);
	vector<string> ObtenerListaVariables();
	list ObtenerListaVariables();
	list ObtenerListaSubfunciones();
	~ArbolSintaxisAbstracta();

	
};