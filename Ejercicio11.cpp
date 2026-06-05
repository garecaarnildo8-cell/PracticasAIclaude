#include <iostream>

using namespace std;

int main()
{
    int vec[5]={42,1,55,22,33};
    int mayor=vec[0];
    int menor=vec[0];
    for(int i=1; i<5;i++)
    {
        if(vec[i]>=mayor)
        {
            mayor=vec[i];
        }
        if(vec[i]<=menor)
        {
            menor=vec[i];
        }
    }
    cout<<"El mayor numero es: "<<mayor<<endl;
    cout<<"El menor numero es: "<<menor<<endl;
}