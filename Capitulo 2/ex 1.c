//Exercicio 01 - Capitulo 1
//Criar um programa em linguagem C que efetue a soma de dois numeros dos tipo real

#include <stdio.h>
#include <conio.h>

int main ()
{
//Declaração das variaveis
float n1, n2, soma, rep;

printf("Soma de dois numeros");

start:
printf("\nDigite o primeiro numero: ");
scanf("%f", &n1);
printf("Digite o segundo numero: ");
scanf("%f", &n2);
soma = n1 + n2;
printf("\nO resultado da soma entre %.0f e %.0f  igual a: %.0f.\n", n1, n2, soma);

//Para repetir o programa utilizar o trecho abaixo

// printf("\n\nDeseja executar outra soma? (1- Sim / 2 - Nao)\n");
// scanf("%f", &rep);
// if (rep==1)
//    {
//    goto start;
//    }
// else
//    {
//    goto end;
//    }

end:
printf("\nAte a proxima!\n");
getch();
}