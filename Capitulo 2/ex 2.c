// Exercicio 02 - Capitulo 1
// Criar um programa em linguagem C que resolva a fórmula de Bháskara

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main ()
{
    //Formulas
    // função de segundo grau ax²+bx+c=0
    // delta = b²-4ac
    // x = (-b +- sqrt(delta))/2a
    //Declaração das variaveis
    
    float a, b, c, delta, x1, x2;

printf("Calculo de uma funcao de 2 Grau\n\n");
printf("Entre com os valores de A, B e C:\n");
scanf("%f%f%f", &a, &b, &c);

delta = pow(b,2)-4*a*c;

x1 = (-b + sqrt(delta))/(2*a);
x2 = (-b - sqrt(delta))/(2*a);

printf("\nO valor de delta: %.2f.", delta);
printf("\nO valor de x1 e x2: %.2f e %.2f.", x1, x2);

getch();

}