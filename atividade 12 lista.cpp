#include <iostream>
using namespace std;

double altura;
int main() {

cout<<"Digite sua altura: (em metros e use ponto para separar.Ex 1.75)";
cin>>altura;
if (altura < 1.5)
{
cout<<"Menor que um metro e meio";
}
if (altura >= 1.50 && altura <= 1.8)
{
   cout<<"entre um metro e meio e um metro e oitenta centimetros";
}
if (altura > 1.8)
{
    cout<<"acima de um metro e oitenta centimetros";
}

    return 0;
}