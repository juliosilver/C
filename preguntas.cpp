#include <iostream>
using namespace std;

int main()
{
    int nota = 0;

    cout << "Ingresa una nota (0 - 20): ";
    cin >> nota;
    
    if (nota < 0 || nota > 20)
    {
        cout << "La nota ingresada es invalida.";
    }
    else if (nota >= 18)
    {
        cout << "Excelente";
    }
    else if (nota >= 14)
    {
        cout << "Muy Bien";
    }
    else if (nota >= 11)
    {
        cout << "Aprobado";
    }
    else
    {
        cout << "Desaprobado";
    }
    return 0;
}