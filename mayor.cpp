/*
informar mayor de dos numeros
 Ierino, Pablo
 Cortina, Mariano
 k1051
*/

#include <iostream>

int main () {
    int a;int b;
 
    std::cout<<"ingrese dos numeros enteros";
    std::cin>>a>> b;

    if (a > b){
        std::cout<<"El mayor es: "<<a;
    }
    else if (b > a){
        std::cout<<"El mayor es: "<<b;
    }
}
