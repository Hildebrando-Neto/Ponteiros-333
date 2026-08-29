// Calcula e exibe a uniao e a intersecao de dois conjuntos representados por vetores.

#include <iostream>

using namespace std;

int main()
{
    int da = 0, db = 0, dc = 0, num = 1;
    
    while(num != 0){
        
    cout <<"Digite as dimensões do Vetor A: ";
    cin >> da;

    cout <<"Digite as dimensões do Vetor B: ";
    cin >> db;

    int *vetorA = new int [da];
    int *vetorB = new int [db];
    int *vetorC = new int [da+db];
    int *vetorD = new int [da];

    cout <<"Digite os valores do Vetor A: ";
    for (int i = 0; i < da; i++){
        cout << "A [" << i << "] = ";
        cin >> vetorA[i];
    }

    cout <<"Digite os valores do Vetor B: ";
    for (int j = 0; j < db; j++){
        cout << "B [" << j << "] = ";
        cin >> vetorB[j];
    }

    int j = 0;

    for (int i = 0; i < da; i++){
        vetorC[i] = vetorA[i];
        dc++;
    }

    for (int i = 0; i < db; i++){
        bool existe = false;
        for (int j = 0; j < da; j++){
            if (vetorB[i] == vetorA[j]){
                existe = true;
                break;
            }
        }
        if (!existe){
            vetorC[dc] = vetorB[i];
            dc++;
        }
    }

    cout <<"Conjunto União:" << endl;
    for(int i = 0; i < dc; i++){
        cout <<"C [" << i << "] = " << vetorC[i] << endl;
    }

    int dd = 0;
    for (int i = 0; i < da; i++){
        for (int j = 0; j < db; j++){
            if (vetorA[i] == vetorB[j]){
                vetorD[dd] = vetorA[i];
                dd++;
                break;
            }
        }
    }

    cout << "Conjunto Intersecção:" << endl;
    for (int i = 0; i < dd; i++){
        cout << "D [" << i << "] = " << vetorD[i] << endl;
    }
    
    cout <<"Digite 1 para continuar ou 0 para finalizar: ";
    cin >> num;
    system("clear");

    delete[] vetorA;
    delete[] vetorB;
    delete[] vetorC;
    delete[] vetorD;
    
    }

    return 0;
}
