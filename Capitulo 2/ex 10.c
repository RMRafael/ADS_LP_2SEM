//Uma pizzaria de São Paulo inventou uma nova modalidade, chamada de "Meia Pizza da Casa".
//O cliente escolhe o raio da pizza e o pizzaiolo faz uma meia pizza de calabresa com essa medida de raio
//Crie um programa para ajudar o pizzaiolo a calculoa a area da pizza baseada na medida do raio escolhido pelo cliente.

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    float raio, area;

    printf("Calculo da area da pizza\n\n");
    
    printf("Entre com o raio da pizza: ");
    scanf("%f",&raio);
    
    //M_PI = valor do PI na biblioteca math.h
    //pow(raio,2)= raio²

    area= M_PI*pow(raio,2);

    printf("A area da pizza eh %.2f.", area);
    
    getch();
}