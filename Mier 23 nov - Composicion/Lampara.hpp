//Archivo de encabezado de Lampara en el ejemplo de composicion
#ifndef LAMPARA_H
#define LAMPARA_H

#include "Foco.hpp"
#include "Apagador.hpp"
#include <string>
using namespace std;

class Lampara{
private:
    string color;
    float costo;
    Foco foco;
    Apagador apagador;
public:
    //Constructores
    Lampara();
    Lampara(string,float);
    //Getters y Setters
    string getColor();
    float getCosto();
    void setCosto(float);
    //Operaciones sobre apagador
    string encender();
    string apagar();
    bool isEncendida();
    //Operaciones sobre el foco
    string cambiarFoco(int,string);
    string colorFoco();
    int luminosidadFoco();
};

#endif
