// Calcula o IMC de varios alunos e informa a faixa de risco de cada um.
#include <iostream>

using namespace std;
double lePositivo(string msg){
    double valor;
    do{
        cout << msg;
        cin >> valor;
    }
    while(valor <= 0.0);
    return valor;
}
double imc(double p, double a){
    double res = p / (a * a);
    return res;
    }

string faixaRisco(double resimc){
    string risco = "";
    if(resimc < 20.0) { risco = "abaixo do peso ideal"; }
    else {
        if(resimc <= 25.0) { risco = "peso ideal."; }
        else{
            if(resimc <= 30.0) { risco = "excesso de peso."; }
            else{
                if(resimc <= 35.0) { risco = "obesidade."; }
                else{
                    risco = "obesidade mórbida.";
                }
            }
        }
    }
    return risco;
}

int main()
{
    int na = 0;
    do{
        cout << "Numero de Alunos (>1 && <= 20): ";
        cin >> na;
    }
    while(na <= 1 || na > 20);
    double *peso = new double[na], *altura = new double[na];
    double *IMC = new double[na];
    string *nome = new string[na], *risco = new string[na];

    for(int i = 0; i < na; i++){
        cout <<"Nome: "; cin.ignore();
        getline(cin,nome[i]);
        peso[i] = lePositivo("Peso: ");
        altura[i] = lePositivo("Altura: ");
     }
    for(int i = 0; i < na; i++){
        IMC[i] = imc(peso[i],altura[i]);
        risco[i] = faixaRisco(IMC[i]);
    }
    for(int i = 0; i < na; i++){
        cout << nome[i] << " | tem IMC = " << IMC[i];
        cout << "e seu IMC indica: " << risco[i] << endl;
    }
    return 0;
}
