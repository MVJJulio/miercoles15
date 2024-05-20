/*Considere que está desarrollando una para empresa que trabaja con tipos de
motor (suponemos que se trata del tipo de motor de una bomba para mover
fluidos). Defina una variable que se llame: tipoMotor . Los valores posibles son
0,1, 2, 3, 4.
A través de un condicional switch realice lo siguiente:*/
#include<iostream>
using namespace std;
int main(){
    int tipoMotor=0;
    cout<<"Elija un numero del 0 al 4 para saber e tipo de bomba: \n";
    cin>>tipoMotor;
    switch (tipoMotor){
    case 0:
        cout<<"No esta establecido un valor definido para el tipo de bomba \n";
        break;
    case 1:
        cout<<"La bomba es una bomba de agua \n";
        break;
    case 2:
        cout<<"La bomba es una bomba de gasolina \n";
        break;
    case 3:
        cout<<"La bomba es una bomba de hormigon \n";
        break;
    case 4:
        cout<<"La bomba es una bomba de pasta alimenticia \n";
        break;
    default:
        cout<<"Noexiste un valor válido para tipo de bomba \n";
        break;
    }
    return 0;
}