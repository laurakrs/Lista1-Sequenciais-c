/* Autora Laura
Agosto 2021
Dado um número inteiro de 3 algarismos, inverter a ordem
de seus algarismos. Os 3 algarismos do número dado são diferentes de zero. 

*/

#include<stdio.h>

int main(void){

int numero, n1, n2, n3;

printf("Programa para inverter algarismos");
printf("\nEntre com o numero inteiro de 3 algarismos: ");
scanf("%d", &numero);

n1 = numero%10;
n2 = (numero - n1)%100;
n3 = (numero - n1 - n2)/100;


printf("\n%d", (n1*100)+n2+n3);


return 0; 

}
