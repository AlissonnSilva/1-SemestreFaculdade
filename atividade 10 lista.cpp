//Elaborar um algoritmo que leia uma letra que pode ser ‘F’ ou ‘J’ e mostra a mensagem “pessoa física”, “pessoa jurídica” ou "tipo de pessoa inválido", conforme o caso. 


#include <iostream>
using namespace std;

int main() {
char escolha;
cout<<"Informe se F ou J: ";
cin>>escolha;
switch (escolha)
{
case 'F':
case 'f':
cout<<"Pessoa fisica"<<endl;
    break;
case 'j':
case 'J':
cout<<"Pessoa juridica";
break;
default:
cout<<"Tipo de pessoa invalido";
    break;
}
    return 0;
}