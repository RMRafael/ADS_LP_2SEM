//Criar um programa em linguagem C que converta
//um numero decimal de 0 a 15  em numero binário

#include<stdio.h>
#include<conio.h>
#include <math.h>

int main()
{
    //Variaveis inteiras usam %d e flutuantes usam %f no scanf e printf
    int num, bin1, bin2, bin3, bin4;
    
    printf("Conversor Decimal -> Binario\n\n");
    printf("Entre com um numero de 0 a 15 para iniciar a conversao: ");
    scanf("%d",&num);

    // % retorna o resto da divisao
    // Numeros binarios se escrevem de tras para frente na ordem das divisoes
    bin4= num%2;
    bin3= (num/2)%2;
    bin2= (num/4)%2;
    bin1= (num/8)%2;


    printf("\nO valor binario eh: %d%d%d%d", bin1, bin2, bin3, bin4);

getch();
}