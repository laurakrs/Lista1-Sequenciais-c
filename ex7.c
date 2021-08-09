/* Autora Laura
* Agosto 2021
* Resistencia equivalente  
* Escrever um programa que calcule a resistência equivalente (Re) de um circuito elétrico
* composto de três resistores R1, R2, e R3 em paralelo. Os valores dos resistores deverão ser lidos
* pelo programa. */

#include <stdio.h>

int main()

{
float r1, r2, r3;

printf("Bem vindo ao programa que calcula a resistencia equivalente!\n");

printf("R1: ");
scanf("%f", &r1);

printf("R2: ");
scanf("%f", &r2);

printf("R3: ");
scanf("%f", &r3);


printf("Resistencia equivalente %.2f", 1/(1/r1 + 1/r2 + 1/r3));

return 0; 


}