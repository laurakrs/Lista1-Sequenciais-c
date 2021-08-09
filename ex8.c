/* Autora Laura 
* Agosto 2021
* Fazer um programa que leia uma temperatura fornecida em graus Farenheit e a converta para o
* seu equivalente em graus centgrados. 
*/

#include <stdio.h>

int main()

{
float tempFarenheit;

printf("Bem vindo ao programa que calcula a temperatura!");

printf("Temperatura em graus Farenheit: ");
scanf("%f", tempFarenheit);

printf("Temperatura em graus centigrados: %.2f", (5/9)*(tempFarenheit-32));

return 0; 

}