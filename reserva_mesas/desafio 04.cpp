// Gerencia a reserva de cadeiras em mesas de um restaurante.

#include <iostream>
#include <stdlib.h>
#include <cmath>

using namespace std;

int main(){

    int mesas=0, Num=1, cadeiras=0, *resPtr = nullptr, flag=1 ;
    do{
        cout<<"Informe o numero de mesas:"<<endl;
        cin>>mesas;
    }while(mesas<50 || mesas>200);
    
    resPtr= new int[mesas+1];
    
    for(int i=0; i<mesas+1; i++){
        resPtr[i]=6;
    }

    while(Num!=0){
        cout<<"Informe o numero da mesa (ou 0 para sair):"<<endl;
        cin>>Num;
        if(Num == 0) break;
        cout<<"Informe o numero de cadeiras dessa mesa:"<<endl;
        cin>>cadeiras;
        
        if(cadeiras>6){
            cout<<"Nao ha lugares suficientes na mesa pretendida"<<endl<<endl;
        }
        else if(resPtr[Num]!=6){
            cout<<"Mesa "<<Num<<" ja esta ocupada"<<endl<<endl;
        }
        else{
            cout<<"Reserva atualizada com sucesso"<<endl<<endl;
            resPtr[Num]=cadeiras;
        }
    }
    
    return 0;
}
