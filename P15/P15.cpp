#include <iostream>
using namespace std;
/*=====================ARGUMENTOS DE FUNCIONES================================*/

void matrixMaker(int M[][1000], int x, int y);
void showM(int M[][1000], int x, int y);
int DiagonaAdd(int M[][1000], int x, int y);

/*=====================VARIABLES GLOBALES================================*/

int x;
int y;
int M[1000][1000];

/*=====================FUNCION MAIN================================*/

int main()
{
    
    cout << "Por favor digite un numero para crear la matriz: ";
    
    cin >> x;
    y=x;
    
    cout << "\n\n\n===========IMPRESION DE MATRIZ============\n\n\n";
    
    matrixMaker(M, x, y);
    showM(M, x, y);
    
    cout << "\n\n\nLa suma de las diagonales de esta matriz es: "
    << DiagonaAdd(M, x, y) << "\n\n\n";
    
    return 0;
}

/*=====================FUNCIONES===================================*/


void matrixMaker(int M[][1000], int x, int y)

{
    int IndexCounter = x * x, 
    temp = x,
    
    sideAB = 0,
    sideCD = temp - 1;
    
    for (int i = 0; i < x/2; i++)
    {
        for (int a = sideCD; a >= sideAB; a--)
        {
            M[sideAB][a] = IndexCounter--;
        }
        
        for (int b = sideAB+1; b < temp-1; b++)
        {
            M[b][sideAB] = IndexCounter--;
        }
        
        for (int c = sideAB; c < sideCD; c++)
        {
            M[sideCD][c] = IndexCounter--;
        }
        
        for (int d = sideCD; d > sideAB; d--)
        {
            M[d][sideCD] = IndexCounter--;
        }
        
        temp-=1;
        sideAB++;
        sideCD--;
    }
    M[x/2][x/2] = 1;
    
}

void showM(int M[][1000], int x, int y)
{
   for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            
            cout << M[i][j] << "\t";
        }
        cout << endl;
    } 
}

int DiagonaAdd(int M[][1000], int x, int y)
{
    int add = 0,
    row=0,
    col=x-1;
    
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            
            if (i == j)
            {
                add += M[i][j];
            }
            if (i == row && j == col)
            {
                add += M[i][j];
            }
        }
        row++;
        col--;
    }
    add-=M[x/2][x/2];
    return add;
}