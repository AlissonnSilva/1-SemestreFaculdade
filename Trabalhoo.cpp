#include <iostream>
using namespace std;




int senha;
float salario_base, horas_extras, salario_estagiario = 800;
int tipo_funcionario;
string nome;
string endereco;
string cpf;
string admissao;




int main(){
cout<<"Informe a Senha: ";
cin>>senha;
switch (senha)//Verificação de senha
{
case 2024120832://Verificação de senha
case 2023219815://Verificação de senha
case 2022113072://Verificação de senha
    cout<<"Acesso Autorizado"<<endl;
    cout<<"============================================"<<endl;
    cout<<"         Cadastro de Funcionarios          "<<endl;/*Solicitando informações do funcionario*/
   
    cout<<"NOME: (Digite seu primeiro e ultimo nome)";
    cin.ignore();
    getline(cin, nome);
    cout<<"\nENDERECO: (Ex:Rua bom Jesus,175,centro)";
    cin.ignore();
    getline(cin, endereco);
    cout<<"\nCPF: ";
    cin>>cpf;
   
    cout<<"\nDATA DE ADMISSAO: (Numeros separados por barra.Ex:10/10/10)";
    cin>>admissao;
    cout<<"\nTIPO DE FUNCIONARIO: (1-EFETIVO; 2-TEMPORARIO; 3-ESTAGIARIO)";
    cin>>tipo_funcionario;




    if (tipo_funcionario == 1){//Condição caso funcionario seja efetivo




        cout<<"\nSALARIO BASE: R$";
        cin>>salario_base;
        cout<<"\nHORAS EXTRAS: ";
        cin>>horas_extras;




        float valor_hora = ((salario_base) / (40 * 5)); //Calculando valor ganho por hora. - Quantidade de horas semanais vezes a quantidade de dias na semana.
       
        double valor_horas_extras = ((valor_hora * 0.5) + valor_hora);//Calculando o valor ganho por hora extra. - Valor ganho por hora vezes 50% (valor ganho por hora extra) mais o valor ganho por hora.
        double total_horas_extras = (valor_horas_extras * horas_extras);//Calculando o total ganho por hora extra - Valor das horas extras vezes as horas extras trabalhadas.
   




        double salario_bruto = (salario_base + total_horas_extras);//Calculando o salario bruto. Salario base mais o total ganho por hora extra trabalhada.
        double salario_final = (salario_bruto - (salario_bruto * 0.2));//Calculando o salario liquido - Valor do salario bruto menos o mesmo com desconto do inss e imposto de renda.








        cout<<"============================================"<<endl;
        cout<<"   CALCULO DE SALARIO FUNCIONARIO EFETIVO   "<<endl;/*Informando ao usuario o resultado do sistema*/
        cout<<"NOME: "<<nome<<endl;
        cout<<"ENDERECO: "<<endereco<<endl;
        cout<<"CPF: "<<cpf<<endl;
        cout<<"DATA DE ADMISSAO: "<<admissao<<endl;
        cout<<"SALARIO BASE: R$"<<salario_base<<endl;
        cout<<"VALOR  HORA: R$"<<valor_hora<<endl;
        cout<<"HORAS EXTRAS TRABALHADAS: "<<horas_extras<<endl;
        cout<<"VALOR HORA EXTRA: R$"<<valor_horas_extras<<endl;
        cout<<"VALOR TOTAL DAS HORAS EXTRAS: R$"<<total_horas_extras<<endl;
        cout<<"DESCONTO PREVIDENCIARIO: 8%"<<endl;
        cout<<"IMPOSTO DE RENDA: 12%"<<endl;
        cout<<"SALARIO FINAL BRUTO: R$"<<salario_bruto<<endl;
        cout<<"SALARIO FINAL LIQUIDO: (COM DESCONTO INSS E IR) R$"<<salario_final<<endl;




    }
    else if (tipo_funcionario == 2){//Condição caso funcionario seja Temporario




         int dias_trabalhados;
     
        cout<<"\nSALARIO BASE: R$";
        cin>>salario_base;
        cout<<"\nDIAS TRABALHADOS: ";
        cin>>dias_trabalhados;
        cout<<"\nHORAS EXTRAS: ";
        cin>>horas_extras;




       
        float valor_hora = ((salario_base) / (40 * 5)); //Calculando valor ganho por hora. - Quantidade de horas semanais vezes a quantidade de dias na semana.








        float valor_dia = (valor_hora*8);//Calculando valor ganho por dia. - Valor ganho por hora vezes horas trabalhadas
       
        double valor_horas_extras = ((valor_hora * 0.5) + valor_hora);//Calculando o valor ganho por hora extra. - Valor ganho por hora vezes 50% (valor ganho por hora extra) mais o valor ganho por hora.




        double total_horas_extras = (valor_horas_extras * horas_extras);//Calculando o total ganho por hora extra - Valor das horas extras vezes as horas extras trabalhadas.




        double salario_bruto2 = ((valor_dia*dias_trabalhados) + total_horas_extras);//Calculando o salario bruto - Valor ganho por dia vezes os dias trabalhados mais o total ganho por hora extra.
        double salario_final2 = (salario_bruto2-(salario_bruto2*0.2));//Calculando o salario liquido - Valor do salario bruto menos o mesmo com desconto do inss e imposto de renda.








        cout<<"============================================"<<endl;
        cout<<" CALCULO DE SALARIO FUNCIONARIO TEMPORARIO  "<<endl;/*Informando ao usuario o resultado do sistema*/
        cout<<"NOME: "<<nome<<endl;
        cout<<"ENDERECO: "<<endereco<<endl;
        cout<<"CPF: "<<cpf<<endl;
        cout<<"DATA DE ADMISSAO: "<<admissao<<endl;
        cout<<"SALARIO BASE: R$"<<salario_base<<endl;
        cout<<"VALOR  HORA: R$"<<valor_hora<<endl;
        cout<<"DIAS TRABALHADOS: "<<dias_trabalhados<<endl;
        cout<<"VALOR GANHO POR DIA TRABALHADO: R$"<<valor_dia<<endl;
        cout<<"HORAS EXTRAS TRABALHADAS: "<<horas_extras<<endl;
        cout<<"VALOR HORA EXTRA: R$"<<valor_horas_extras<<endl;
        cout<<"VALOR TOTAL DAS HORAS EXTRAS: R$"<<total_horas_extras<<endl;
        cout<<"DESCONTO PREVIDENCIARIO: 8%"<<endl;
        cout<<"IMPOSTO DE RENDA: 12%"<<endl;
        cout<<"SALARIO FINAL BRUTO: R$"<<salario_bruto2<<endl;
        cout<<"SALARIO FINAL LIQUIDO: (COM DESCONTO INSS E IR) R$"<<salario_final2<<endl;




    }
    else if (tipo_funcionario == 3){//Condição caso funcionario seja Estagiario




        cout<<"============================================"<<endl;
        cout<<" CALCULO DE SALARIO FUNCIONARIO ESTAGIARIO  "<<endl;/*Informando ao usuario o resultado do sistema*/
        cout<<"NOME: "<<nome<<endl;
        cout<<"ENDERECO: "<<endereco<<endl;
        cout<<"CPF: "<<cpf<<endl;
        cout<<"DATA DE ADMISSAO: "<<admissao<<endl;
        cout<<"SALARIO FINAL: R$"<<salario_estagiario<<".00"<<endl;




    }
    else{
        cout<<"Tipo de funcionario invalido"<<endl;//Informando saida invalida
    }
break;




default:
cout<<"Senha incorreta"<<endl;//Informando senha invalida
break;
}
    return 0;
}
