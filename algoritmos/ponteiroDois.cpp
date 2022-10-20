#include <iostream>

using namespace std;

int main(){

    int *x, valor, y;
    valor = 35;
    x = &valor; // O endereço de valor
    y = *x; // O conteúdo da variável apontada por x

    cout << "Endereco da variavel valor: " << &valor << endl;
    cout << "Conteudo do ponteiro x: " << x << endl;
    cout << "Endereco da variavel x: " << &x << endl;
    cout << "Conteudo da variavel apontada por x: " << *x << endl;
    cout << "Endereco da variavel valor: " << y << endl;

    return 0;
}