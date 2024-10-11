//Fazer um programa para Converter Reais para Dólares e Euros


#include <iostream>
using namespace std;
int main(){
double real, dolar, euro;
cout<<"Quantos reais deseja converter? ";
cin>>real;
dolar = (real/4.98);
euro = (real/5.39);
cout<<"A convercao de "<<real<<" reais para"<<endl;
cout<<"Dolar: "<<dolar<<endl;
cout<<"Euro: "<<euro<<endl;


    return 0;
}