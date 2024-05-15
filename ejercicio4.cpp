/*Realice un programa que ingresando las notas de 6 evaluaciones. Que calcule
el promedio final de la materia y le indique si paso o no la materia. Utilizando
los siguientes porcentajes para evaluar.
Debe de solicitarle al usuario que ingrese su nombre y cada nota de la
evaluación.
Nota: se pasa la materia con 6.0*/
#include<iostream>
using namespace std;
int main(){
    float corto1=0.00, corto2=0.00;
    float parcial1=0.00, parcial2=0.00;
    float laboratorio=0.00;
    float proyecto=0.00;
    float nota=0.00;
    cout<<"Ingrse la nota del corto 1 \n";
    cin>>corto1;
    cout<<"Ingrese la nota del corto 2\n";
    cin>>corto2;
    cout<<"Ingrese la nota del Parcial 1\n";
    cin>>parcial1;
    cout<<"Ingrese la nota del parcial 2\n";
    cin>>parcial2;
    cout<<"Ingrese la nota del laboratorio\n";
    cin>>laboratorio;
    cout<<"Ingrese la nota del proyecto \n";
    cin>>proyecto;
    nota=(corto1*0.10)+(corto2*0.10)+(parcial1*0.15)+(parcial2*0.20)+
    (laboratorio*0.20)+(proyecto*0.25);
    if (nota<6){
        cout<<"El estudiante reprobo con: "<<nota<<"\n";
    } else if (nota>=6){
        cout<<"El estudiante aprobo con: "<<nota<<"\n";
    }
    
    return 0;
}