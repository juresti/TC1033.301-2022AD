//Codigo fuente de Apagador del ejemplo de composicion
#include "Apagador.hpp"

Apagador::Apagador() : encendido{false} {}
bool Apagador::isEncendido() {return encendido;}
void Apagador::encender() {encendido = true;}
void Apagador::apagar() {encendido = false;}
