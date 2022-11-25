//Codigo fuente de la Lampara del ejercicio de composicion
#include "Lampara.hpp"
#include <iostream>
using namespace std;
//Constructores
Lampara::Lampara() : color{"Negra"},costo{499.99},foco{Foco{40,"Blanco"}},apagador{Apagador{}} {}
Lampara::Lampara(string col,float cost) : color{col},costo{cost},foco{Foco{10,"Oro"}},apagador{Apagador{}} {}
    //Getters y Setters
string Lampara::getColor() {return color;}
float Lampara::getCosto() {return costo;}
void Lampara::setCosto(float c) {costo = c;}
    //Operaciones sobre apagador
string Lampara::encender() {
    apagador.encender();
    return "Tu lampara ha sido encendida";
}
string Lampara::apagar(){
    apagador.apagar();
    return "Tu lampara ha sido apagada";
}
bool Lampara::isEncendida(){return apagador.isEncendido();}
    //Operaciones sobre el foco
string Lampara::cambiarFoco(int l,string c){
    apagador.apagar();
    foco = Foco{l,c};
    return "Tu lampara tiene un nuevo foco de luminosidad " + to_string(foco.getLuminosidad()) +
            " y color " + foco.getColor();
}
string Lampara::colorFoco() {return foco.getColor();}
int Lampara::luminosidadFoco() {return foco.getLuminosidad();}
