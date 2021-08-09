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

    // 11111
    n1 = numeroBinario % 10; // 1
    printf("%d", n1);
    n2 = (numeroBinario - n1) % 100; //11110 %100 = 10 
    printf("%d", n2);
    n3 = (numeroBinario-n2-n1)%1000; //11100 % 1000 = 100
    printf("%d", n3);
    n4 = (numeroBinario-n3-n2-n1)%10000; //11000 % 10000 = 1000
    printf("%d", n4);
    n5 = (numeroBinario-n4-n3-n2-n1)/10000; //10000 / 10000 = 1 
    printf("%d", n5);

    numDecimal = n1*1 + (n2/10)*2 + (n3/100)*4 + (n4/1000)*8 + n5*16;

    printf("Numero decimal: %d", numDecimal);
    


    return 0; 
}