/*Autora Laura KRS
Agosto 2021

12. [Algoritmos – Salvetti & Barbosa] Dado um número inteiro que representa um número binário
de cinco dígitos, determinar seu equivalente decimal. */

#include <stdio.h>

int main(void){

    int numeroBinario, numDecimal, n5, n4, n3, n2, n1; 

    printf("Vamos calcular um nuemro decimal!");
    printf("\nEntre com um numero binario de 5 digitos: ");
    scanf("%d", &numeroBinario);

    n1 = numeroBinario % 10;
    n2 = (numeroBinario - n1) % 100; 
    n3 = (numeroBinario-n2-n1)%1000;
    n4 = (numeroBinario-n3-n2-n1)%10000;
    n5 = (numeroBinario-n4-n3-n2-n1)/10000;

    numDecimal = n1*2^0 + n2*2 + n3*2^2 + n4*2^3 + n5*2^4;

    printf("Numero decimal: %d", numDecimal);
    


    return 0; 
}