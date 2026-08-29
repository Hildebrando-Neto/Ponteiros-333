// Soma dois vetores de mesma dimensao e exibe o vetor resultante.
#include <iostream>

using namespace std;

int main()
{
    int da = 0, db = 0, i, j, num = 1;

    while (num != 0){

    cout<<"Digite as dimensoões do Vetor A: ";
    cin >> da;

    cout <<"Digite as dimensões do Vetor B: ";
    cin >> db;

    float *vetorA = new float[da];
    float *vetorB = new float[db];
    float *vetorC = new float[da];

    cout <<"Digite os Valores do Vetor A: " << endl;
    for ( i = 0; i < da; i++){
        cout <<"A [" << i << "] = ";
        cin >> *(vetorA + i);
    }

    cout <<"Digite os Valores do Vetor B: " << endl;
    for ( j = 0; j < db; j++){
        cout <<"B [" << j << "] = ";
        cin >> *(vetorB + j);
    }

    if(i == j){
        cout << " Vetor C" << endl;
        for (i = 0; i < da; i++){
            *vetorC = vetorA[i] + vetorB[i];
            cout <<"C [" << i << "] = " << *vetorC << endl;
        }

        cout <<"Digite 1 para continuar ou 0 para finalizar: ";
        cin >> num;
        system("clear");
    }

    else{
    cout <<"   Os Vetores não sao iguais" << endl;
    cout <<"Digite 1 para continuar ou 0 para finalizar: ";
    cin >> num;
    system("clear");
    }

    delete[] vetorA; vetorA = nullptr;
    delete[] vetorB; vetorB = nullptr;
    delete[] vetorC; vetorC = nullptr;

    }

    return 0;
}
