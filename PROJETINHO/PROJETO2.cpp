#include <iostream>
using namespace std;

int main (){

    double precoproduto;
    double desconto;

    cout << "Qual o preco do produto: " << endl;
    cin >> precoproduto;

    if (precoproduto <= 100) {
        desconto = precoproduto;
    }

    if (precoproduto > 100&&200){
        desconto = precoproduto + (precoproduto*0.10);
    }

    if (precoproduto >= 200) {
        desconto = precoproduto + (precoproduto*0.20);
    } 

    cout << "O preco final ficou: " << desconto << endl;


    return 0;

}