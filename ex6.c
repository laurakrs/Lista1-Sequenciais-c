/* Autora Laura
* Agosto 2021
* Calcula custo do consumidor   
* [Algoritmos - A. I. Orth] O custo ao consumidor, de um carro novo, é a soma do custo de fábrica
com a percentagem do distribuidor e dos impostos (aplicados ao custo de fábrica). Supondo que
a percentagem do distribuidor seja de 28% e os impostos de 45%, escrever um algoritmo para ler
o custo de fábrica de um carro e escrever o custo ao consumidor. */

#include <stdio.h>

int main()

{
float custoFabrica;

printf("Bem vindo ao programa que calcula o custo ao consumidor!\n");

printf("Custo de fabrica: ");
scanf("%f", &custoFabrica);

printf("Custo consumidor %.2f", custoFabrica*(1 + 0.28 + 0.45));

return 0; 

}