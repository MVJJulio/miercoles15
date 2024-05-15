/*Desarrolle un programa que considere las siguientes reglas:
Un ángulo se considera agudo si es menor de 90°, obtuso si es mayo de 90° y
recto si es igual a 90°.
*/
#include<iostream>
using namespace std;
int main(){
    float angulo=0.00;

    cout<<"Introduzca el valor para saber el tipo de angulo \n";
    cin>>angulo;

    if (angulo<90){
        cout<<"Su angulo es agudo \n";
    } else if (angulo>90){
        cout<<"Su angulo es obtuso \n";
    } else if (angulo==90){
        cout<<"Su angulo es recto \n";
    }
    
    return 0;
}