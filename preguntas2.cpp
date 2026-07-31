#include <iostream>
using namespace std;

int main()
{
    int nota = 0;
    
    do
    {
        cout << "ingrtesa tu nota (0 - 20): ";
        cin >> nota;

        if (nota < 0 || nota > 20)
        {
            cout << "Nota incorrecta. Vuelva a ingresar a ingresar su nota. \n\n";
        }
    } while (nota < 0 || nota > 20);
    
    // Clasificación de la nota
    if (nota >= 18)
    {
        cout << "Excelente";
    }
    else if (nota <= 14)
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