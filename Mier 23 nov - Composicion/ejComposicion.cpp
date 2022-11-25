//Programa de pruebas del ejemplo de composicion
#include "Apagador.hpp"
#include "Foco.hpp"
#include "Lampara.hpp"
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    cout << "*** Pruebas de Apagador ***\n";
    Apagador miAp {};
    cout << miAp.isEncendido() << endl;
    miAp.encender();
    cout << miAp.isEncendido() << endl;
    miAp.apagar();
    cout << miAp.isEncendido() << endl;

    cout << "\n*** Foco ***\n";
    Foco foco1 {};
    Foco foco2 {100,"Azul"};
    cout << "El foco 1 es de luminosidad " << foco1.getLuminosidad() << " y color " << foco1.getColor() << endl;
    cout << "El foco 2 es de luminosidad " << foco2.getLuminosidad() << " y color " << foco2.getColor() << endl;

    cout << "\n*** Pruebas de Lampara ***\n";
    Lampara lamp1 {};
    Lampara lamp2 {"Fucsia",1583.45};
    cout << "Lampara 1 es de color " << lamp1.getColor() << endl;
    cout << "Lampara 2 cuesta " << lamp2.getCosto() << endl;
    lamp2.setCosto(3500.00);
    cout << "Lampara 2 cuesta " << lamp2.getCosto() << endl;
    lamp1.encender();
    cout << lamp1.isEncendida() << endl;
    lamp2.apagar();
    cout << lamp2.isEncendida() << endl;
    cout << lamp1.cambiarFoco(100,"Morado") << endl;
    cout << lamp1.luminosidadFoco() << endl;
    cout << lamp1.colorFoco() << endl;
    return 0;
}
