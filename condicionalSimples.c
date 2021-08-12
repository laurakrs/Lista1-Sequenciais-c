#include <stdio.h>

int main(void){
    char codigo;
    int unidades;
    float valor; 

    //Precos Tipo A = 10.00 / Tipo B 20.00 / C 30.00*/

    printf("Codigo livro (A, B, C): ");
    scanf("%c", codigo);

    printf("Unidades: ");
    scanf("%d", unidades);

    if(codigo == 'A'){
        valor = unidades * 10;
    }else if(codigo == 'B'){
        valor = unidades * 20;
    }else if(codigo == 'C'){
        valor = unidades * 30; 
    }else{
        printf("Codigo invalido!");
    }

    if(unidades > 10){
        printf("Venda de mais de 10 unidades!");
    }

    printf("Valor: %.2f", valor);

   
    return 0;
}