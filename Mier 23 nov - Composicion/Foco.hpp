//Archivo de encabezados de Foco del ejemplo de composicion
#ifndef FOCO_H
#define FOCO_H

#include <string>
using namespace std;

class Foco{
private:
    int luminosidad;
    string color;
public:
    Foco();
    Foco(int,string);
    int getLuminosidad();
    string getColor();
};

#endif
