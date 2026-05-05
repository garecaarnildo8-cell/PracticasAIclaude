#include <iostream>

using namespace std;

int main()

{
    int numero_secreto=7;

    int n;
    cout<<"Adivina el numero secreto....."<<endl;
    cout<<"Ingrese un numero: ";
    cin>>n;
    while (n!=numero_secreto)
    {
        if(n<numero_secreto)
        {
            cout<<"El numero es menor al numero secreto..."<<endl;
        }
        if (n>numero_secreto)
        {
            cout<<"El numero es mayor al numero secreto..."<<endl;
        }
        cout<<"Ingrese otro numero: ";
        cin>>n;
    }
    cout<<"Ganaste...."<<endl;
}