#include <iostream>
#include <list>
#include <vector>
#include <math.h>
#include <string>
using namespace std;
class Funcion {
private:
  vector<string> v;
public:
  Funcion CrearFuncion(string exp);
  string ObtenerCadenaFuncion(Funcion a);
  bool DeterminarContenenciaVariables(Funcion a);
  Funcion EvaluarFuncion(Funcion a, char var, int valor );
  Funcion LimpiarCerosyUnos(Funcion a);
  Funcion DerivarFuncion(Funcion a, int var);
  vector<char> ObtenerListasVariables(Funcion a);
//  List ObtenerListasVariables(Funcion a);
//  List ObtenerListaSubfuncion(Funcion a);
};

Funcion Funcion::CrearFuncion(string exp){}
string Funcion::ObtenerCadenaFuncion(Funcion a){}
bool Funcion::DeterminarContenenciaVariables(Funcion a){}
Funcion Funcion::EvaluarFuncion(Funcion a, char var, int valor){}
Funcion LimpiarCerosyUnos(Funcion a){}
Funcion Funcion::DerivarFuncion(Funcion a, int var){}
std::vector<char> Funcion::ObtenerListasVariables(Funcion a){}

