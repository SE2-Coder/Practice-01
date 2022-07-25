#include<iostream>
using namespace std;

int diagram(int num);

int main()
{
    int num = 0;
    
    
    cout << "Digite el numero impar para dibujar el patron: ";
    cin >> num;
    
    while (num % 2 != 0)
    {
        diagram(num);
        num = 0;
    }
    cout << "El programa a finalizado";
    return 0;
}

int diagram(int num)
{
    char nums[num] = {};
    
    int lines = num/2;
    
    int spc_counter_left = lines;
    int ast_counter = 1;
    int spc_counter_rigth = lines;
    
    for (int i = 0; i < lines; i++)
    
    {
        for(int i = 0; i < spc_counter_left; i++)
        {
            cout << " ";
        }
        spc_counter_left--;
        for(int i = 0; i < ast_counter; i ++)
        {
            cout << "*";
            
        }
        ast_counter += 2;
        for(int i = 0; i < spc_counter_rigth; i++)
        {
            cout << " ";
        }
        spc_counter_rigth--;
        cout << endl;
    }
    
    for (int i = 1; i <= num; i++)
    {
        nums[i] = '*';
        cout << nums[i];
    }
    cout << endl;
    
 /*========================TRIANGULO INFERIOR===========*/
    spc_counter_left = 1;
    ast_counter = num - 2;
    spc_counter_rigth = 1;
    for (int i = 0; i < lines; i++)
    {
        for (int i = 0; i < spc_counter_left; i++)
        {
            cout << " ";
        }
        for (int i = 0; i < ast_counter; i++)
        {
            cout << "*";
        }
        for (int i = 0; i < spc_counter_rigth; i++)
        {
            cout << " ";
        }
    cout << endl;
        
    spc_counter_left++;
    ast_counter -= 2;
    spc_counter_rigth++;
    }
    return 0;
}