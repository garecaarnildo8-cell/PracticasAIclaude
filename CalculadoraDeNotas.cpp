#include <iostream>

using namespace std;

int main()
{
    int nota1, nota2, nota3;
    float promedio = 0;
    cout << "Ingresa las 3 notas de los estudiantes: " << endl;
    cin >> nota1 >> nota2 >> nota3;
    if (nota1 <= 100 && nota2 <= 100 && nota3 <= 100 && nota1 >= 0 && nota2 >= 0 && nota3 >= 0)
    {
        promedio = (nota1 + nota2 + nota3) / float(3);
        if (promedio >= 51)
        {
            cout << "Promedio: " << promedio << " El estudiante aprobo la materia." << endl;
        }
        else
        {
            cout << "Promedio: " << promedio << "  El estudiante reprobo la materia." << endl;
        }
    }
    else
    {
        cout << "Error: las notas deben estar entre 1 y 100." << endl;
    }

    return 0;
}