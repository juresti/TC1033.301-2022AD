//Codigo fuente de Foco del ejemplo de composicion
#include "Foco.hpp"
#include <string>
using namespace std;

Foco::Foco() : luminosidad{60},color{"Blanco"} {}
Foco::Foco(int l,string c) : luminosidad{l},color{c} {}
int Foco::getLuminosidad() {return luminosidad;}
string Foco::getColor() {return color;}
