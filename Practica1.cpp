#include <iostream>

using namespace std;

int main()
{
    int n;
    int m;

    cout << "Cuantas manzanas tienes: ";
    cin >> n;
    if (n <= 0)
    {
        cout << "Error ingrese un numero positivo" << endl;
        return 1;
    }
    cout << "\nCuantas manzanas comes al dia: ";
    cin >> m;
    
    if ( m<=0)
    {
        cout << "Error no puedes comer 0 manzanas";
        return 1;
    }
    int duran = n / m;

    cout << "\nLas manzanas duran: " << duran << " dias." << endl;
}