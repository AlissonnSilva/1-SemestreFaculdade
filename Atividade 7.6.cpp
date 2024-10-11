#include <iostream>
using namespace std;



const int vento = 40;
const int temperatura = 15;
int num1, num2;




int main(){

cout<<boolalpha;

cout<<"Digite o valor da velocidade do vento e da temperatura: (Separados por espaco)";
cin>>num1>>num2;
bool vestir_casaco = true;
vestir_casaco = (num1>vento) || (num2<temperatura);
cout<<"Temperatura: "<<num2;
cout<<"\nVelocidade do vento: "<<num1;
cout<<"\nLevar casaco: "<<vestir_casaco;

    return 0;
}