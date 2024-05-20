/*Elabore un programa que permita seleccionar un sector del estadio, ingresar la
cantidad de entradas solicitadas y calcular el total a pagar por las entradas*/
#include<iostream>
using namespace std;
int main(){
    int tipodeentrada;
    int numerodeentradas=1;
    int precio;
    cout<<" Bienvenido al Estadio XYZ\n";
    cout<<"Elija su tipo de entrada\n";
    cout<<"Sector   Costo de la entrada \n";
    cout<<"1.Sol general      $3 \n";
    cout<<"2.Sol preferente   $5 \n";
    cout<<"3.Sombra           $8 \n";
    cout<<"4.Tribuna          $15 \n";
    cout<<"5.Platea           $20 \n";
    cin>>tipodeentrada;
    switch (tipodeentrada){
    case 1:
        cout<<"Digite el numero de entradas";
        cin>>numerodeentradas;
        precio=numerodeentradas*3;
        cout<<"Su total es: "<<precio<<"\n";
        break;
    case 2:
        cout<<"Digite el numero de entradas";
        cin>>numerodeentradas;
        precio=numerodeentradas*5;
        cout<<"Su total es: "<<precio<<"\n";
        break;
    case 3:
        cout<<"Digite el numero de entradas";
        cin>>numerodeentradas;
        precio=numerodeentradas*8;
        cout<<"Su total es: "<<precio<<"\n";
        break;
    case 4:
        cout<<"Digite el numero de entradas";
        cin>>numerodeentradas;
        precio=numerodeentradas*15;
        cout<<"Su total es: "<<precio<<"\n";
        break;
    case 5:
        cout<<"Digite el numero de entradas";
        cin>>numerodeentradas;
        precio=numerodeentradas*20;
        cout<<"Su total es: "<<precio<<"\n";
        break;
    default:
        cout<<"Opcion invalida\n";
        break;
    }






    return 0;
}