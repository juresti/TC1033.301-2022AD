//Ejercicio de la Sesion 5 en Canvas
#include <cmath>
#include <iostream>
using namespace std;

class Point{
private:
    double x;
    double y;
public:
    //Constructores
    Point(double xIn,double yIn) : x{xIn},y{yIn} {} //member initializing lists
    Point(){ //Inicializando de manera normal en otros lenguajes de programacion
        x = 0.0;
        y = 0.0;
    }
    //getters
    double getX() {return x;}
    double getY() {return y;}
    //setters
    void setX(double xIn) {x = xIn;}
    void setY(double yIn) {y = yIn;}
    //otros métodos
    double distance(Point p){
        return sqrt(pow(x - p.getX(),2) + pow(y - p.getY(),2));
    }
}; //Clase Point

int main(int argc, char const *argv[])
{
    Point punto1; //constructor de default
    Point punto2 {1.0,0.0}; //constructor completo
    double nuevaX {0.0};

    cout << "Punto 1 es " << punto1.getX() << "," << punto1.getY() << endl;
    cout << "Punto 2 es " << punto2.getX() << "," << punto2.getY() << endl;
    cout << "Dime la X del punto 1: "; cin >> nuevaX;
    punto1.setX(nuevaX);
    
    cout << "Distancia entre esos dos puntos: " << punto1.distance(punto2) << endl;
    return 0;
}
