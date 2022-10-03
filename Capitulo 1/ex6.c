//Criar um programa que faça a conversão de 4 bits (NIBLE) em um numero decimal

#include <stdio.h>
#include <conio.h>

int main ()
{

    printf("Conversor Nible - > Decimal\n\n");

    //var bin = 0 ou 1 de acordo com o numero binario que deseja converter
    //Cada numero da sequencia vai ficar armazenado em uma variavel

    int bin1,bin2,bin3,bin4,num;

        printf("Digite os quatro numeros separado por espaço ou um de cada vez: ");
    scanf("%d%d%d%d", &bin1, &bin2, &bin3, &bin4);
    num = (bin1*8)+(bin2*4)+(bin3*2)+bin4;

    printf("O numero correspondente eh: %d", num);

    getch();
}