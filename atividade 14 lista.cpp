/*Faça um algoritmo que leia as 3 notas de um aluno e calcule a sua média 
anual ponderada, com o peso: 2, 3 e 5, respectivamente. Se a nota obtida for 
entre 6 a 10 está aprovado; se é entre 4 e 5.9 em recuperação, se é menor 
que 4 reprovado. Se o aluno está em recuperação ler a nota de recuperação 
e calcular a média final (que é a média entre a média anual e a nota de recuperação). Se a média final é menor que 5 o aluno está reprovado após 
recuperação, se é igual ou maior que 5 está aprovado após recuperação.

*/








#include <iostream>
using namespace std;
double nt1, nt2, nt3;
double calculo;
int main() {
cout<<"Digite suas tres notas em ordem e separadas por espaco: ";
cin>>nt1>>nt2>>nt3;

calculo = ((2*nt1)+(3*nt2)+(5*nt3))/(2+3+5);
if (calculo >= 6 && calculo <= 10)
{
  cout<<"esta aprovado.Com media de: "<<calculo;
}
if (calculo >= 4 && calculo <= 5.9)
{
double rec;
double calculo2;
  cout<<"em recuperacao.Com media de: "<<calculo<<endl;
  cout<<"=================================="<<endl;
  cout<<"\nDigite a nota da recuperacao: ";
cin>>rec;
calculo2 = ((calculo+rec)/2);
if (calculo2 <6)
{
     cout<<"esta reprovado apos recuperacao. com media de: "<<calculo2<<endl;
}
if (calculo2 >=6)
{
     cout<<"esta aprovado apos recuperacao. com media de: "<<calculo2<<endl;
}
}
if (calculo <4)
{
  cout<<"reprovado.Com media: "<<calculo;
}

    return 0;
}