/*
programa que calcula la superficie y la circunferencia de un circulo
*/
#include<stdio.h>

int main(){
    float pi = 3.141592;
    float diam = 0;
    float rad = 0;
    float circ = 0;
    float super = 0;
    float cons = 2.00000;

    printf("Hola usuario por favor ingresa el radio de tu circulo: \n");
    scanf("%f", &rad);

    diam = cons*rad;
    circ = pi*diam;
    super = pi*rad*rad;

    printf("==========================================================================\n");
    printf("el diametro de tu circulo es: %f \n",diam);
    printf("la circunferencia del circulo es: %f \n",circ);
    printf("la superficie del circulo es: %f \n",super);
    printf("==========================================================================\n");

    return 0;
}