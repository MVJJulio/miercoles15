/*5- Realice un programa que calcule la solución de una ecuación de segundo
grado. El usuario tiene que ingresar los valores de a, b y c; y el programa 
le debe de mostrar la respuesta de las dos raíces.
Nota: considere el caso si a =0 y b= 0.
*/
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    float a=0.00;
    float b=0.00;
    float c=0.00;
    float respuesta1=0.00;
    float respuesta2=0.00;
    cout<<"Digite el valor de a \n";
    cin>>a;
    cout<<"Digite el valor de b \n";
    cin>>b;
    cout<<"Digite el valor de c \n";
    cin>>c;
    if (a==0 || b==0){
        cout<<"Datos invalidos \n";
    } else{
        respuesta1=(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
        respuesta2=(-b-sqrt(pow(b,2)-4*a*c))/(2*a);
        cout<<"x1= "<<respuesta1<<"\n";
        cout<<"x2= "<<respuesta2<<"\n";
    }
    return 0;
}