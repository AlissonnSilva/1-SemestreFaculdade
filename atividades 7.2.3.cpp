//Fazer um programa que pergunte um valor em metros e imprima o correspondente em decímetros, centímetros e milímetros.


#include <iostream>
using namespace std;

int metros;
int decimetro;
int centimetro;
int milimetro;

int main(){

    cout<<"Digite um valor em metros";
    cin>>metros;
    decimetro = (metros*10);
    centimetro = (metros*100);
    milimetro =(metros*1000);
cout<<"Valor em decimetros: "<<decimetro;
cout<<"\nValor em centimetro: "<<centimetro;
cout<<"\nValor em milimetro: "<<milimetro;


    return 0;
}