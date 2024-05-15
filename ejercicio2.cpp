/*Escriba un programa que al ingresar la edad de un usuario y 
que indique si es mayor de edad o no.*/
#include<iostream>
using namespace std;
int main(){
    int edad=0;

    cout<<"Digite la edad de la persona: \n";
    cin>>edad;
    if (edad<18){ //menor de edad
        cout<<"La persona es menor de edad \n";
    } else if(edad>=18){ //mayor de edad
        cout<<"Es mayor de edad \n";
    } else if (edad<0){ //edad invalida
        cout<<"Edad invalida";
    }
    
    return 0;
}