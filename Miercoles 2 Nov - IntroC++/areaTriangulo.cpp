// Ejercicio 3 de la Actividad 1
#include <iostream>
using namespace std;

int main()
{
    float base {0.0};
    float altura {0.0};
    float area {0.0};

    cout << "Dime la base: "; cin >> base;
    cout << "Dime la altura: "; cin >> altura;
    area = base * altura / 2;

    cout << "El area es " << to_string(area) << endl;
    return 0;
}
