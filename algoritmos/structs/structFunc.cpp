#include <iostream>
using namespace std;

struct Carro { 
    string nome;
    string cor;
    int pot;
    int velMax;
    int vel;

    void insere(string cnome, string ccor, int cpot, int cvelMax, int cvel){
        nome = cnome;
        cor = ccor;
        pot = cpot;
        velMax = cvelMax;
        vel = cvel;
    }

    void mostra(){
        cout << "Nome:............. " << nome << endl;
        cout << "Cor:.............. " << cor << endl;
        cout << "Potência:......... " << pot << endl;
        cout << "Velocidade Máxima: " << velMax << endl;
        cout << "Velocidade Atual:. " << vel << endl;
    }

    void mudaVel(int cvel){
        vel = cvel;
        if (vel > velMax){
            vel = velMax;
        } 
        if (vel < 0) {
            vel = 0;
        }
    }

};

// É como se fosse um registro
// o objetivo é criar uma variável 
// permitindo que receba todos essas propriedades/métodos etc.

int main(){

    Carro car1;

    car1.insere(0)


    return 0;
}