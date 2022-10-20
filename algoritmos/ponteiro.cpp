#include <iostream>
using namespace std;

int main()
{

    /*
    * -> indica um ponteiro / valor
    & -> endereço de memória
    */

    string nome = "Robert";
    string *ptr;

    ptr = &nome;

    cout << ptr << "\n";  // imprime a variável ptr, que está com endereço de nome
    cout << *ptr << endl; // imprime o valor

    return 0;
}