#include <iostream>
using namespace std;

int main()
{

    /*
    * -> indica um ponteiro / valor
    & -> endereço de memória
    *(ptr+=1) -> incrementar índice no vetor
    */

    int *ptr;
    int vetor[10];

    ptr = vetor; // = ptr = &vetor[0]

    cout << ptr << endl;

    // Para atribuir valores no array
    *ptr = 1; // índice 0 / vetor [0]
    cout << *ptr << endl;

    // Acessar próximo índice no vetor
    *(ptr+= 1);
    *ptr = 2; // índice 1 / vetor[1]
    cout << *ptr << endl;

    return 0;
}