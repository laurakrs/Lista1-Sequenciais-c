/* Autora Laura 
*Agosto 2021

*ex 13 Transformar o valor correpondente a um intervalo temporal, expresso em horas, minutos e
*segundos, no valor correspondente em segundos. 
*/

#include <stdio.h>

int main(void){
    int horas, minutos, segundos, totalSegundos;

    printf("Vamos calcular o tempo em segundos! ");
    printf("\nHoras: ");
    scanf("%d", &horas);
    printf("\nMinutos: ");
    scanf("%d", &minutos);
    printf("\nSegundos: ");
    scanf("%d", &segundos);

    totalSegundos = horas*3600 + minutos*60 + segundos;

    printf("\nTempo em segundos: %d", totalSegundos);

    return 0; 
}