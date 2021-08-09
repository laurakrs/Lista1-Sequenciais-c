/*Autora: Laura


Dado um número inteiro, obter seu último algarismo. 
*/

#include <stdio.h>

int main(void){
    int numero;

    printf("Entre o numero: ");
    scanf("%d", &numero);

    printf("O ultimo algarismo e: %d", numero%10);

    return 0; 


}