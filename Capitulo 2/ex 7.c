//Criar um programa que calcule o perimetro e area de uma circunferencia
//o usuario deve informar apenas o raio

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    float raio, area, per;

    printf("Calculo do perimetro e area\n\n");
    
    printf("Entre com o raio da circunferencia: ");
    scanf("%f",&raio);
    
    //M_PI = valor do PI na biblioteca math.h
    //pow(raio,2)= raio²

    per= 2*M_PI*raio;
    area= M_PI*pow(raio,2);

    printf("O perimetro eh %.2f e a area eh %.2f", per, area);
    
    getch();
}