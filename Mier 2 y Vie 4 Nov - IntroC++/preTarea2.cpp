//Nombre y matricula de ambos
#include <iostream>

using namespace std;

void operaNumeros(){
    cout << "Estoy en operaNumeros" << endl;
}



int main(int argc, char const *argv[])
{
    int op {0};
    while (op != 9){
        cout << "1) operaNumeros" << endl;
        cout << "2) numeroImpar" << endl;

        cout << "Selecciona la opcion: "; cin >> op;
        switch (op)
        {
        case 1:
            operaNumeros();
            break;
        case 2:
            break;
        case 9:
            cout << "Nos vemos" << endl;
            break;
        default:
            cout << "Error, opcion invalida, vuelva a intentar" << endl;
            break;
        }
    }
    return 0;
}
