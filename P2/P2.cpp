#include <iostream>
using namespace std;

int conversor(int x, int y);

int main()
{
int quantity = 0;
int change[10] = {50000,20000,10000,5000,2000,1000,500,200,100,50};
cout << "\nIngrese el valor que desea repartir: ";
cin >> quantity;
cout << endl;

    for (int i=0; i<=9; i++)
        {
            if (quantity >= change[i])
            {
                quantity=conversor(quantity,change[i]);
            }
        }
    
    cout << endl << "El valor faltante es de: $"<<quantity<<endl;

    return 0;
}


int conversor (int x, int y)
{
    
    if (y > 500)
    {
        cout << "La cantidad de billetes de $"<< y <<" es: " << x/y<<endl;
    }
    else if (y <= 500)
    {
        cout << "La cantidad de monedas de $"<< y <<" es: " << x/y<<endl;
    }
    
    x %= y;
    return x;
}