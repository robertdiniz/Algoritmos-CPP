#include <iostream>

using namespace std;

int main(){

    int a, *pont1, **pont2;
    a = 35;
    pont1 = &a; // O endereço de valor
    pont2 = &pont1; // O conteúdo da variável apontada por x

    cout << "Endereco da variavel a: " << &a << endl;
    cout << "Endereco da variavel ponteiro pont1: " << &pont1 << endl;
    cout << "Endereco da variavel ponteiro pont2: " << &pont2 << endl;
    cout << "Conteudo do ponteiro pont1: " << pont1 << endl;
    cout << "Conteudo do ponteiro pont2 x: " << pont2 << endl;
    cout << "Valor armazenado em a: " << **pont2 << endl;

    return 0;
}