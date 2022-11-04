//Solocuioin al ejercicio 6 de la Actividad 1

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    float precio {0.0};
    float impuesto {0.0};
    float porcentaje {0.0};
    float res {0.0};

    cout << "Dime el precio base del producto: "; cin >> precio;
    cout << "Dime el porcentaje del impuesto: "; cin >> impuesto;
    
    porcentaje = impuesto / 100;
    res = precio + precio * porcentaje;

    cout << "El precio del producto con el " << impuesto << "% de impuesto es " << res << endl;

    return 0;
}
