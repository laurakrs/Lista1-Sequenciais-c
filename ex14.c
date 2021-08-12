/* Autora Laura
Agosto 2021

14. Escreva um programa que calcule o menor número de notas e de moedas que deve ser dado de
troco para um pagamento efetuado. O programa deve ler o valor a ser pago e o valor
efetivamente pago. Supor que o troco seja dado em notas de 50, 20 e 10 reais, nota ou moeda de
1 real, e em moedas de 50, 10, 5 e 1 centavos. 
*/

#include <stdio.h>
#include <math.h>

int main(void){

    float valorDado, valorPago, troco;
    int trocoNota, trocoCentavos, notas50, notas20, notas10, notas1, moedas50, moedas10, moedas5, moedas1; 

    printf("Qual o valor a ser pago? ");
    scanf("%f", &valorPago);

    printf("Qual o valor a dado? ");
    scanf("%f", &valorDado);

    troco = valorDado - valorPago; //54

    trocoNota = floor(troco);

    trocoCentavos = (troco - trocoNota)*100;

    printf("\nTroco Nota: %d", trocoNota);
    printf("\nTroco Centavos: %d",trocoCentavos);
    
    notas50 = floor(trocoNota/50); // 1 
    
    notas20 = floor((trocoNota - notas50*50)/20); //4/20 -> 0 

    notas10 = floor((trocoNota - notas50*50 - notas20*20)/10); //4/10 -> 0

    notas1 = trocoNota - notas50*50 - notas20*20 - notas10*10; //4 

    moedas50 = floor(trocoCentavos/50);
    
    moedas10 = floor((trocoCentavos - moedas50*50)/10); 

    moedas5 = floor((trocoCentavos - moedas50*50 - moedas10*10)/5);

    moedas1 = trocoCentavos - moedas50*50 - moedas10*10 - moedas5*5;
     
    printf("\nQuantidade de notas: 50 - %d; 20 - %d; 10 - %d; 1 - %d", notas50, notas20, notas10, notas1);
    printf("\nQuantidade de moedas: 50 - %d; 10 - %d; 5 - %d; 1 - %d", moedas50, moedas10, moedas5, moedas1);
    


    return 0; 
}
