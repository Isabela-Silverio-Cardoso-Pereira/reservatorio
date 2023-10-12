/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{

    double altura;
    double largura;
    double comprimento;
    cout << "informe a altura em cm" << endl; 
    cin >> altura;
    
    cout << "informe a largura em cm" << endl;
    cin >> largura;
    
    cout << "informe o comprimento em cm" << endl;
    cin >> comprimento;
    
    double consumo_diario_litros_dias;
    cout << "informe o consumo diário dos utilizadores em litros/dias" << endl;
    cin >> consumo_diario_litros_dias;
    
    double capacidade_total_litros = (comprimento * largura * altura/ 10000); // cm para L (conversão)
    double autonomia_dias = capacidade_total_litros/ consumo_diario_litros_dias;
    
    if(autonomia_dias <2){
        cout << "consumo elevado" << endl;
    }else if(autonomia_dias >=2 && autonomia_dias <=7){
        cout << "consumo moderado" << endl;
    }else{
        cout << "consumo reduzido" << endl;
    }
    
    cout << "a capacidade total do reservatório em litros é: " << capacidade_total_litros << endl;
    cout << "a autonomia do reservatório em dias é: " << autonomia_dias << endl;
   
    
    return 0;
}
