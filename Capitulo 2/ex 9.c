//Uma fabrica de brinquedos no Japão inventou uma nova forma de produzir banbolês.
//O cliente escolhe o raio do bambolê e a fabrica pórduz sob medida.
//Crire um programa para ajudar o fabricante a calcular o perimetro do bancoble
//baseado na medida do raio escolhida pelo cliete.

//Criar um programa que calcule o perimetro e area de uma circunferencia
//o usuario deve informar apenas o raio

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    float raio, per;

    printf("Tamanho do bambole\n\n");
    
    printf("Entre com o raio desejado: ");
    scanf("%f",&raio);
    
    //M_PI = valor do PI na biblioteca math.h
     per= 2*M_PI*raio;

    printf("O perimetro do bambole eh %.2f.", per);
    
    getch();
}