//Programa que se ejecuta para el ejemplo de la clase Point
#include "Point.hpp"
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    Point p1 {};
    Point p2 {3.5,9.2};
    double xUsuario;
    cout << p2.distance(p1) << endl;
    cout << "X de p2 " << p2.getX() << endl;
    cout << "X de p1 " << p1.getX() << endl;

    cout << "Dime el nuevo valor de X de p1: "; cin >> xUsuario;
    p1.setX(xUsuario);
    cout << "Nueva X de p1 " << p1.getX() << endl;
    return 0;
}
