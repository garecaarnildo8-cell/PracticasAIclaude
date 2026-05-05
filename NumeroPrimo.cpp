#include <iostream>

using namespace std;

int main()

{
    int n,busca_primo=0;
    cout<<"Ingrese un numero: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            busca_primo++;
        }
    }
    if(busca_primo==2)
    {
        cout<<"Es primo"<<endl;

    }
    else
    {
        cout<<"No es primo"<<endl;
    }
}

