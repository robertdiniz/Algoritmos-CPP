#include <iostream>
using namespace std;

void ehMatrizIdentidade(const int *mat, int n);

int main()
{

    int matriz[2][2];
    int matriz1[3][2];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            matriz[i][j] = i;
        }
    }

    ehMatrizIdentidade(matriz, 2);

    return 0;
}

int ehMatrizIdentidade(int *mat, int n)
{
    l = 0;
    c = 0;
    for (int i = 0; i < n; i++)
    {
        l++;
        for (int j = 0; j < n; j++)
        {
            c++;
        }
    }
    if (l == c)
    {
        cout << "É uma matriz quadrada!";
    }
    else
    {
        cout << "Não é uma matriz quadrada!";
    }
}