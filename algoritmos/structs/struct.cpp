#include <iostream>
using namespace std;

struct Carro { 
    string nome;
    string cor;
    int pot;
    int velMax;
};

// É como se fosse um registro
// o objetivo é criar uma variável 
// permitindo que receba todos essas propriedades/métodos etc.

int main(){

    Carro car1;
    Carro car2;

    car1.nome = "Tornado";
    car1.cor = "Vermelho";
    car1.pot = 450;
    car1.velMax = 350;

    car2.nome = "Luxo";
    car2.cor = "Preto";
    car2.pot = 250;
    car2.velMax = 260;

    cout << "Nome: " << car1.nome << endl;
    cout << "Cor: " << car1.cor << endl;
    cout << "Potência:" << car1.pot << endl;
    cout << "Velocidade Máxima: " << car1.velMax << endl;

    return 0;
}