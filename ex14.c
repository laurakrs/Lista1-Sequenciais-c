/* Autora Laura
Agosto 2021

14. Escreva um programa que calcule o menor número de notas e de moedas que deve ser dado de
troco para um pagamento efetuado. O programa deve ler o valor a ser pago e o valor
efetivamente pago. Supor que o troco seja dado em notas de 50, 20 e 10 reais, nota ou moeda de
1 real, e em moedas de 50, 10, 5 e 1 centavos. 
*/

#include <stdio.h>

int main(void){

    float valorDado, valorPago, troco;
    int notas50, notas20, notas10, notas1, moedas50, moedas10, moedas5, moedas1; 

    printf("Qual o valor a ser pago? ");
    scanf("%f", valorPago);

    printf("Qual o valor a dado? ");
    scanf("%f", valorDado);

    troco = valorDado - valorPago;
    
    notas50 = troco/50; 
    
    notas20 = (troco - notas50*50)/20; 

    notas10 = (troco - notas50*50 - notas20*20)/10; 

    


    return 0; 
}
