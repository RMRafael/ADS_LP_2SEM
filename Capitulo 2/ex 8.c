//Criar um programa que receba uma medida em pés, faça as conversoes para polegada, jarda e milhas

#include<stdio.h>
#include<conio.h>

int main()
{
    float pes, pol, jardas, milhas;

    printf("Conversor de medidas\n\n");

    printf("Informe a medida em pes: ");
    scanf("%f",&pes);

    pol= pes*12;
    jardas= pes/3;
    milhas= pes/5280;

    printf("%.2f pe(s) equivale a %.2f polegadas.\n", pes, pol);
    printf("%.2f pe(s) equivale a %.2f jardas.\n", pes, jardas);
    printf("%.2f pe(s) equivale a %.2f milhas.\n", pes, milhas);

    getch();
}