//Criar um programa em Linguagem c que converta sua idade
//em meses semanas, dias, horas, minutos e segundos

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main ()
{

printf("Conversao de idade\n\n");

float idade, mes, sem, dia, hor, min, seg;

    printf("Insira sua idade: ");
    scanf("%f",&idade);

//conversões
mes=idade*12;
sem=idade*48;
dia=idade*365;
hor=idade*8760;
min=idade*525600;
seg=idade*31536000;

    printf("Sua idade eh equivalente a %.f meses.\n", mes);
    printf("Sua idade eh equivalente a %.f semanas.\n", sem);
    printf("Sua idade eh equivalente a %.f dias.\n", dia);
    printf("Sua idade eh equivalente a %.f horas.\n", hor);
    printf("Sua idade eh equivalente a %.f minutos.\n", min);
    printf("Sua idade eh equivalente a %.f segundos.\n", seg);

getch();
}