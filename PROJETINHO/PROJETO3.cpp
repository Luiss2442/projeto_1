#include <iostream>
using namespace std;

int main () {

    int escolha;
    double C;
    double F;

    cout << "Escreva 0 para Celcius para converter Celcius para Farenheit ou 1 para Farenheit para converter Farenheit em Celcius: " << endl;
    cin >> escolha;
    
     if (escolha == 0) {
        cout << "Qual a temperatura de hoje: " << endl;
        cin >> C;
        F = (C*9/5) + 32;
        cout << "A conversao de Celcius para farenheit deu: " << F << endl;
    }

    if (escolha == 1) {
        cout << "Qual a tempertaura de hoje " << endl;
        cin >> F;
        C = (F-32) * 5/9;
        cout << "A conversão de Farenheit para Celcius deu: " << C << endl;
    }



    
}