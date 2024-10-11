//Ler dois valores inteiros e apresentar a adição destes valores, quando o primeiro valor for maior que o segundo, caso contrário, efetuar a multiplicação dos valores. 



#include <iostream>
using namespace std;


int main (){


int num;
int num2;

cout<<"Digite dois numeros separados por espaco: ";
cin>>num>>num2;
if (num>num2)
{
 cout<<num+num2;
}
else 
cout<<num2*num;



    return 0;
}