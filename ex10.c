/* Autora Laura
Agosto 2021
Dado um número inteiro de 3 algarismos, inverter a ordem
de seus algarismos. Os 3 algarismos do número dado são diferentes de zero. 

*/

#include<stdio.h>

int main(void){

int numero;

printf("Programa para inverter algarismos");
printf("\nEntre com o numero inteiro de 3 algarismos: ");
scanf("%d", &numero);

printf("%d", numero%10);
printf("%d", (numero-(numero%10))%100);
printf("%d", (((numero-(numero%10)-(numero-(numero%10)%100))/100)));

return 0; 

}
