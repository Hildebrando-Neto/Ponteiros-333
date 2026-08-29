// Multiplica cada elemento do vetor A pela soma dos elementos do vetor B, permitindo repeticao.
#include <iostream>
using namespace std;

int main() {
    int da, db;
    cout << "Digite a dimensao do vetor A: ";
    cin >> da;
    cout << "Digite a dimensao do vetor B: ";
    cin >> db;

    double *A = new double[da];
    double *B = new double[db];
    double *C = new double[da];

    cout << "Digite os valores do vetor A:\n";
    for(int i = 0; i < da; i++) {
        cout << "A[" << i << "] = ";
        cin >> *(A+i);
    }

    cout << "Digite os valores do vetor B:\n";
    for(int i = 0; i < db; i++) {
        cout << "B[" << i << "] = ";
        cin >> *(B+i);
    }

    system("clear");

    for(int i = 0; i < da; i++) {
        double soma = 0;
        for(int j = 0; j < db; j++) {
            soma += *(B+j);
        }
        *(C+i) = *(A+i) * soma;
    }

    cout << " Vetor C\n";
    for(int i = 0; i < da; i++) {
        cout << "C[" << i << "] = " << *(C+i) << endl;
    }

    delete[] A;
    delete[] B;
    delete[] C;

    return 0;
}



