 //Fazer um programa que lê o preço de um produto e inflacione o preço em 10% se ele for menor que 100 reais em 20% se for maior ou igual a 100 reais.

 #include <iostream>
using namespace std;

double preco;



int main(){


cout<<"Qual eh o valor do produto? ";
cin>>preco;
if (preco<100)
{
    cout<<"O valor com acrescimo de dez porcento ficara: "<<((preco*0.1)+preco);
}
else 
{
cout<<"O valor com acrescimo de vinte porcento ficara: "<<((preco*0.2)+preco);
}


    return 0;
}