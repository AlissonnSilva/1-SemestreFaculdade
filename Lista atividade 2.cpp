#include <iostream>
using namespace std;
int main(){
float metro;
float centimetro;
float decimetro;
float milimetro;

cout<<"Digite o valor em metros que deseja converter: ";
cin>>metro;
centimetro = (metro*100);
decimetro = (metro*10);
milimetro = (metro*1000);

cout<<"Valor em decimetro: "<<decimetro<<" dm";
cout<<"\nValor em centimetro: "<<centimetro<<" cm";
cout<<"\nValor em milimetro: "<<milimetro<<" mm";





    return 0;
}