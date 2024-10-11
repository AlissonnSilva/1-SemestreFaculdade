/*Elaborar um algoritmo que lê 2 valores a e b e os escreve com a mensagem: 
‘São múltiplos’ ou ‘Não são múltiplos’. */





#include <iostream>
using namespace std;
int a, b;

int main() {
cout<<"Digite dois numeros separados por espaco: ";
cin>>a>>b;
if (a % b == 0)
{
cout<<"Sao multiplos"<<endl;
}
else
{
    cout<<"Nao sao multiplos"<<endl;
}



    return 0;
}