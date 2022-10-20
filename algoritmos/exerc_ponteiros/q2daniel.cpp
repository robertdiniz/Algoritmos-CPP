#include <iostream> 
 using namespace std; 
    
 typedef struct { //Declaração da STRUC com nome Ponto 
     int X; //Declaração das variáveis dentro da Struct com seus respectivos tipos 
     int Y; //Declaração das variáveis dentro da Struct com seus respectivos tipos 
 } Ponto; //Nome da Struct 
  
 void SetPonto (Ponto *P, int x, int y) //Função que insere os pontos dos vértices na Struct Ponto, 
 // é passado aqui o endereço de memória de &P1, &P2 e &p das Struct, chamadas na função main. 
 //os valores x e y são valores passados por SetPonto na função main. 
 { // Nesta função o parâmetro P é um ponteiro para uma struct, no caso struct Ponto 
     (*P).X = x; //um objeto 'x/y' é declarado com o tipo da variável 'X/Y' 
     (*P).Y = y; //o campo 'X/Y' ao qual P aponta pega o valor 'x/y' passado na função 
 } 
  
 void ImprimePonto(Ponto P) // declara o parâmetro P como uma struct 
 { 
   cout << P.X << " , " << P.Y; //na saída o cout imprime os valores que foram passados no 'main' 
   //cada chamada no 'main' passa valores diferentes que são injetados nessa função. 
 } 
  
 int dentroRet (Ponto *P1, Ponto *P2, Ponto *p)//essa função só é chamada uma vez no main 
 // e lá são passados os endereços de memória que são recebidos 
 //são passados endereços de memória das structs que são recebidos e passados 
 { 
     if ((((*p).X >= (*P1).X) && ((*p).X <= (*P2).X)) && (((*p).Y >= (*P1).Y) && ((*p).Y <= (*P2).Y))){ 
         //os valore provenientes dos endereços de memória são passados 
         // esses endereços são structs que possuem os valores X/Y  
         cout << '1'; 
     } 
     else { 
         cout << '0'; 
     } 
 } 
  
 int main(){ 
  
     int v1x, v1y, v2x, v2y, px, py; 
  
     cout << "Digite o valor de X do vértice 1: "; 
     cin >> v1x; 
     cout << "Digite o valor de Y do vértice 1: "; 
     cin >> v1y; 
     cout << "Digite o valor de X do vértice 2: "; 
     cin >> v2x; 
     cout << "Digite o valor de Y do vértice 2: "; 
     cin >> v2y; 
     cout << "Digite o valor de X do ponto teste: "; 
     cin >> px; 
     cout << "Digite o valor de Y do ponto teste: "; 
     cin >> py; 
  
     Ponto P1, P2, p; 
  
     SetPonto(&P1, v1x, v1y); 
     SetPonto(&P2, v2x, v2y); 
     SetPonto(&p, px, py); 
     ImprimePonto(P1); 
     cout << '\n'; 
     ImprimePonto(P2); 
     cout << '\n'; 
     ImprimePonto(p); 
     cout << '\n'; 
     dentroRet(&P1, &P2, &p); 
     cout << '\n'; 
  
     return 0; 
  
 }