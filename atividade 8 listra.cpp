/*Fazer um programa em "C" que solicite 2 números e informe: 
a) A soma dos números; 
b) O produto do primeiro número pelo quadrado do segundo; 
c) O quadrado do primeiro número; 
d) A raiz quadrada da soma dos quadrados; 
e) O módulo do primeiro número.*/






#include <iostream>
using namespace std;

int main() {

int num, num2;
int  adicao;
int  multiplicacao;
double somaQuadrados;
int quadrado;
int modulo;
double raizQuadrada = 0;

cout<<"Digite dois numeros separados por espaco: ";
cin>>num>>num2;
adicao = (num + num2);
multiplicacao = (num*(num2*num2));
quadrado = (num*num);
somaQuadrados = (num*num)+(num2*num2);
modulo = (num % num);
for (double  i = 1; i * i <= somaQuadrados; i+=0.0001){
    raizQuadrada = i;
}


cout<<"\nA soma dos numeros e de: "<<adicao;
cout<<"\nO produto do primeiro numero pelo quadrado do segundo: "<<multiplicacao;
cout<<"\nO quadrado do primeiro numero: "<<quadrado;
cout<<"\nA raiz quadrada da soma dos quadrados: "<<raizQuadrada;
cout<<"\nO modulo do primeiro numero e: "<<modulo;


    return 0;
}