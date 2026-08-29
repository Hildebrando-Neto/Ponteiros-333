// Calcula o perimetro e a area de um triangulo a partir dos seus tres lados.
#include <iostream>
#include <cmath>
#include <stdlib.h>

using namespace std;

int main()
{
    int num;
    float l1,l2,l3, *spPtr = nullptr, *perPtr = nullptr, *areaPtr = nullptr;

    do
    {

    cout <<"Digite o valor dos tres lados do triangulo: ";
    cin >> l1 >> l2 >> l3;

    system("clear");

    if( (l1 + l2) <= l3 || (l1 + l3) <= l2 || (l2 + l3) <= l1)
    {
        cout <<"Valores nao formam um trinagulo.\n";
    }
    else
    {
        spPtr = new float;
        perPtr = new float;
        areaPtr = new float;
        *perPtr = (l1 + l2 + l3);
        *spPtr = *perPtr / 2.0;
        *areaPtr = sqrt(*spPtr *(*spPtr - l1) * (*spPtr - l2) * (*spPtr - l3));

        cout <<"Valores de cada lado: "<< l1 << "," << l2 << "," << l3 << endl;
        cout << "Perimetro = " << *perPtr << endl;
        cout << "Area = " << *areaPtr << endl;

        delete perPtr; perPtr = nullptr;
        delete spPtr; spPtr = nullptr;
        delete areaPtr; areaPtr = nullptr;

    }
    cout <<"Digite 1 para continuar ou 0 para terminar: ";
    cin >> num;
    system("clear");
    }
    while(num != 0);
    return 0;
}

