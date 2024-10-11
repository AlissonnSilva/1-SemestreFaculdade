/*Elabore um algoritmo que lê um número que representa uma senha, verifica 
se a senha está correta ou não, comparando-a com a senha 34567, e informa 
"Acesso autorizado" ou "Acesso negado", conforme o caso. */



#include <iostream>
using namespace std;
char senha;

int main() {
    cout<<"Digite a senha: ";
    cin>>senha;
switch (senha)
{
case '123':
    cout<<"Acesso autorizado";
    break;

default:
cout<<"Acesso negado";
    break;
}

}