//Programa de pruebas del ejemplo de composicion
#include "Apagador.hpp"
#include "Foco.hpp"
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
    return 0;
}
