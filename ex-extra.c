/* Laura
*Agosto 2021
* Faça um algoritmo e o programa em C que:
/*○ leia valor de uma venda e comissão a ser paga
*(número inteiro correspondente ao percentual)
* ○ calcule a comissão
*○ mostre a comissão
*/

#include <stdio.h>

int main(void){

    float venda, comissaoValor;
    int comissaoPercentual; 

    printf("Valor da venda: ");
    scanf("%f", &venda);

    printf("Percentual da comissao: ");
    scanf("%d", &comissaoPercentual);

    comissaoValor = venda*(comissaoPercentual/100);

    printf("Valor da comissao: %f", comissaoValor);



    return 0; 
}