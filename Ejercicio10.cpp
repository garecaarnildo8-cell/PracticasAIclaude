#include <iostream>

using namespace std;

int main()
{
    int vec[5] = {56, 12, 77, 89, 45};

    int suma = 0;
    for (int i = 0; i < 5; i++)
    {
        suma += vec[i];
    }
    if (suma / 5 >= 51)
    {
        cout << "aprobado";
    }
    else
    {
        cout << "reprobado";
    }
}