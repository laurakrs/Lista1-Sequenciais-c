/* Autora Laura
* Agosto 2021
* Dado um número de 3 algarismos, construir outro número de
* 4 algarismos, de acordo com a seguinte regra: a) os três primeiros algarismos, contados da
* esquerda para a direita, são iguais aos do número dado; b) o quarto algarismo é um dígito de
* controle calculado da seguinte forma: primeiro algarismo + segundo algarismo x 3 + terceiro
* algarismo x 5; o dígito de controle é igual ao resto da divisão dessa soma por 7.
*/

#include <stdio.h>

int main(void){

    int numero, n1, n2, n3, novoNumero;

    printf("Bem vindo ao criador de um novo numero!");
    printf("\nEntre com um numero de 3 algarismos: ");
    scanf("%d", &numero);

    n3 = numero%10; 
    n2 = (numero-n3)%100; 
    n1 = (numero-n2-n3)/100;

    printf("%d", &n3);
    printf("%d", &n2);
    printf("%d", &n1);

    novoNumero = numero*10 + (n1+n2*3+n3*5)%7;

    printf("Novo numero: %d", novoNumero);

    return 0; 
}