//Criar um programa em linguagem C que faça a 
//conversão de m em km, hm, dam, dc, dm e mm

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main ()
{
printf("Converssor de medidas\n\n");

float metro, km, hm, dm, dc, dm, mm;
printf("Digite a medida em Metros que deseja converter: ");
scanf("%f", &metro);

km=metro/1000;
hm=metro/100;
dm=metro/10;
dc=metro*10;
dm=metro*100;
mm=metro*1000;

printf("O valor em km: %.f\n", km);
printf("O valor em hm: %.f\n", hm);
printf("O valor em dm: %.f\n", dm);
printf("O valor em dc: %.f\n", dc);
printf("O valor em dm: %.f\n", dm);
printf("O valor em mm: %.f\n", mm);

getch ();
}