/*Se sabe que la suma de los ángulos internos de un triángulo suma 180°.
Realice un programa que le solicite al usuario 2 ángulos y su programa
devuelva el tercero.*/
#include<iostream>
using namespace std;
int main(){
    float angulo1=0.00;
    float angulo2=0.00;
    float angulo3=0.00;

    cout<<"Programma para devolver el 3 angulo \n";
    cout<<"Ingrese el angulo 1: \n";
    cin>>angulo1;
    cout<<"Ingrese el angulo 2: \n";
    cin>>angulo2;
    if ((angulo1<0||angulo2<0)||(angulo1>180||angulo2>180)){
        cout<<"Valores invalido \n";
    }else{
        angulo3= 180- angulo1-angulo2;
        cout<<"El valor del tercer angulo es: "<<angulo3<<"\n";
    }
    return 0;
}