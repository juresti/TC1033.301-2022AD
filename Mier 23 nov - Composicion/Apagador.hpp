//Archivo de cabecera de Apagador ejemplo de Composicion
#ifndef APAGADOR_H
#define APAGADOR_H

class Apagador{
private:
    bool encendido;
public:
    Apagador();
    bool isEncendido();
    void encender();
    void apagar();
};

#endif
