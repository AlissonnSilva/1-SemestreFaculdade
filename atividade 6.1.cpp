#include <iostream>
using namespace std;
const double quarto_p = 100;
const double quarto_g = 150;
const double taxa = 0.06;
int quartp;
int quartg;
int main(){
cout<<"Bem vindo ao servico de limpeza do Alisson!!!";
cout<<"\nValor de limpeza de carpete nos quartos grandes: "<<quarto_g<<" Reais";
cout<<"\nValor de limpeza de carpete nos quartos pequenos: "<<quarto_p<<" Reais";
cout<<"\n=================================================";
cout<<"\nQuantos carpetes em quartos pequenos deseja limpar? ";
cin>>quartp;
cout<<"Quantos carpetes em quartos grandes deseja limpar? ";
cin>>quartg;
cout<<"\n===================================================";
cout<<"\nOrcamento para servico de limpeza de carpetes";
cout<<"\nNumero de quartos pequenos: "<<quartp;
cout<<"\nNumero de quartos grandes: "<<quartg;
double preco_p = quarto_p*quartp;
cout<<"\nPreco total nos quartos pequenos: "<<preco_p;
double preco_g = quarto_g*quartg;
cout<<"\nPreco total nos quartos grandes: "<<preco_g;
double imposto = (((quarto_p*quartp)+(quarto_g*quartg))*taxa);
cout<<"\nValor da taxa: "<<imposto;
cout<<"\n====================================================";
double orc_total =preco_g+preco_p+imposto;
cout<<"\nOrcamento total: "<<orc_total;
cout<<"\nOrcamento valido por 30 dias";
    return 0;
}
