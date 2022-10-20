#include <iostream>
using namespace std;

void somar(float *var, float valor);

void preencher(float *vetor);

int main()
{

    // Parte 1 - alterando valores de variáveis

    float num = 0;

    // Erro 1
    // somar(num, 5);
    // cout << num; output 0
                // por causa do escopo
                // por isso temos que usar &
    // Forma certa
    somar(&num, 5);
    cout << num << endl;

    // Parte 2 - alterando valores de arrays

    float vetor[5];

    preencher(vetor); // não preciso passar &

    for(int i = 0; i < 5; i++){
        cout << vetor[i] << " ";
    }

    return 0;
}

void somar(float *var, float valor){
    *var+=valor; // quando se trata de variáveis
                // usar o operador *
}

void preencher(float *vetor){
    vetor[0] = 1;
    vetor[1] = 2;
    vetor[2] = 3;
    vetor[3] = 4;
    vetor[4] = 5;
}