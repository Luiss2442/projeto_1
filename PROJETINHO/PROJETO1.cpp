#include <iostream>
using namespace std;

int main () {

    double  horastrabalhadas;
    double  valorcadahora;
    double  horasamais;
    double  valoramais;
    double  salariometade;
    double  salariointeiro;

    cout << "Quantas horas trabalhadas: " << endl;
    cin >> horastrabalhadas;

    cout << "Qual o valor de cada hora: " << endl;
    cin >> valorcadahora;

    horasamais = horastrabalhadas - 40;
    salariometade = horastrabalhadas*valorcadahora;

    if (horasamais >= 1&&horasamais <=20){
        valoramais = horasamais*(valorcadahora*0.5);
        salariointeiro = salariometade + valoramais;
    }else if (horasamais > 20){
        valoramais = horasamais*valorcadahora;
        salariointeiro = salariometade+valoramais;
    }else{
        salariointeiro = salariometade;
    }

    cout << "O salario na semanal do trabalhador eh " << salariointeiro;

}