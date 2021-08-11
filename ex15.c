/* Autora Laura
* 15. Faça um programa que calcule o custo e o número de latas de tinta necessárias para a pintura de
* um tanque cilíndrico de combustível, sabendo que cada lata custa R$25,00, contém 5 litros de
* tinta e que cada litro pinta 3 metros quadrados. A altura e o raio do cilindro serão informados
* via teclado. Lembre-se que a área de um cilindro corresponde a: 

*/

#include <stdio.h>
#include <math.h>

int main(void){

    float custo, latas, raio, altura, area;
    
    printf("Raio do cilindro: ");
    scanf("%f", &raio);

    printf("\nAltura do cilindro: ");
    scanf("%f", &altura);

    area = 3.14 * pow(raio,2) + 2*3.14*raio*altura;

    latas = ceil(area/3); 

    custo = latas * 25;

    printf("\nNumero de latas: %f", latas);
    printf("\nCusto: %f", custo);

    return 0; 
}