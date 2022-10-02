//Jogo 21 para treinar alinhamentos de laço condicional utilizando IF
//As regras eram fazer o sorteio de cartas aleatorias utilizando rand
//Exibir o vencedor no final da rodada e exibir o motivo da vitoria com base nas regras do jogo 21

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

void main ()
{
// C = cartas sorteadas 
// S = pontuação VC e PC
// R = continuar ou parar
int c1,c2,c3,c4,c5,c6, s1,s2,s3,s4, r1,r2,r3; 
printf("PROGRAMA 21");

start:
// Comando random inicia em 0, mas as cartas iniciam em 1 (Ás)
// Limitei o valor para sorteio em 9 e vou somar 1 em cada carta
    srand(time(NULL));
    c1 = 1+rand()%10;
    c2 = 1+rand()%10;
    c3 = 1+rand()%10;
    c4 = 1+rand()%10;
    c5 = 1+rand()%10;
    c6 = 1+rand()%10;
    
// Soma das pontuações de todas as rodadas
// s1 e s2 = vc
// s3 e s4 = pc
    s1 = c1+c2;
    s2 = s1+c3;
    s3 = c4+c5;
    s4 = s3+c6;
    
//Inicio do Jogo
printf("\n\nPrimeira Rodada");
printf("\nVC = %d + X + X = %d", c1, c1);
printf("\nPC = X + X + X = X");
printf("\n\nDeseja continuar? (1-Sim/2-Nao)\n");
scanf("%d",&r1);
    if (r1==1)
    {    
    //Segunda Rodada
    printf("\nSegunda Rodada");
    printf("\nVC = %d + %d + X = %d", c1, c2, s1);
    printf("\nPC = X + X + X = X");
    printf("\n\nDeseja continuar? (1-Sim/2-Nao)\n");
    scanf("%d",&r2);
        if(r2==1)
        {
        //Rodada Final
        printf("\nRodada Final");
        printf("\nVC = %d + %d + %d = %d", c1, c2, c3, s2);
        printf("\nPC = %d + %d + %d = %d", c4,c5,c6, s4);
        
        //Exibição do resultado
        
        //Primeiro vamos verificar se alguem marcou mais de 21 pontos
        //Caso VC estoure os 21 pontos
            if (s2>21)
                {
                printf("\nSua pontuacao estourou os 21 pontos.");
                printf("\nNao foi dessa vez, VC perdeu!");
                 //Jogar mais uma vez?    
                printf("\n\nDeseja jogar novamente? (1-Sim/2-Nao)");
                scanf("%d",&r3);
                if (r3==1)
                    {
                    goto start;
                    }
                else
                    {
                    goto end;
                    }
                }
        //Caso PC estoure os 21 pontos    
            if (s4>21)
                {
                printf("\nPC estourou os 21 pontos.");
                printf("\nParabens, VC ganhou!!!");
                 //Jogar mais uma vez?    
                printf("\n\nDeseja jogar novamente? (1-Sim/2-Nao)");
                scanf("%d",&r3);
                if (r3==1)
                    {
                    goto start;
                    }
                else
                    {
                    goto end;
                    }
                }
        //Caso VC e PC estourem os 21 pontos
            if (s2>21 && s4>21)
                {
                printf("\nVC e PC estouram os 21 pontos.");
                printf("\nNinguem ganhou!");
                     //Jogar mais uma vez?    
                printf("\n\nDeseja jogar novamente? (1-Sim/2-Nao)");
                scanf("%d",&r3);
                if (r3==1)
                    {
                    goto start;
                    }
                else
                    {
                    goto end;
                    }                    
                }     
        //Exibição dos resultados caso ninguem estoure a pontuação        
        //Caso VC ganhar
            if(s2>s4)
                {
                printf("\nVoce ganhou!");
                printf("\nSua pontuacao foi maior que o PC");
                //Jogar mais uma vez?    
                printf("\n\nDeseja jogar novamente? (1-Sim/2-Nao)");
                scanf("%d",&r3);
                if (r3==1)
                    {
                    goto start;
                    }
                else
                    {
                    goto end;
                    }
                }
        //Caso PC ganhar
            if(s2<s4)
                {
                printf("\nNao foi dessa vez, VC perdeu!");
                printf("\nSua pontuacao foi menor que o PC");
                //Jogar mais uma vez?    
                printf("\n\nDeseja jogar novamente? (1-Sim/2-Nao)");
                scanf("%d",&r3);
                if (r3==1)
                    {
                    goto start;
                    }
                else
                    {
                    goto end;
                    }  
                }
        //Caso de empate           
            if(s2=s4)
                {
                printf("\nVoces emapataram.");
                printf("\nSua pontuacao foi igual ao PC.");                
                //Jogar mais uma vez?    
                printf("\n\nDeseja jogar novamente? (1-Sim/2-Nao)");
                scanf("%d",&r3);              
                if (r3==1)
                    {
                    goto start;
                    }   
                else
                    {
                    goto end;
                    }  
                } 
        }
    //Caso o jogador decida parar na segunda rodada
        else
        {
        printf("\nResultado 2 Rodada");
        printf("\nVC = %d + %d = %d", c1, c2, s1);
        printf("\nPC = %d + %d = %d", c4,c5,s3);

        //Exibição do resultado
        //Como é impossivel estourar em 2 rodadas vamos direto para o resultado
        //Caso VC ganhar
            if(s1>s3)
                {
                printf("\nVoce ganhou!");
                printf("\nSua pontuacao foi maior que o PC.");
                //Jogar mais uma vez?    
                printf("\n\nDeseja jogar novamente? (1-Sim/2-Nao)");
                scanf("%d",&r3);
                if (r3=1)
                    {
                    goto start;
                    }
                else
                    {
                    goto end;
                    }
                }
        //Caso PC ganhar
            if(s1<s3)
                {
                printf("\nVoce Perdeu!");
                printf("\nSua pontuacao foi menor que o PC.");
                //Jogar mais uma vez?    
                printf("\n\nDeseja jogar novamente? (1-Sim/2-Nao)");
                scanf("%d",&r3);
                if (r3==1)
                    {
                    goto start;
                    }
                else
                    {
                    goto end;
                    }  
                }
        //Caso de empate           
            if(s1=s3)
                {
                printf("\nVoces empataram.");
                printf("\nSua pontuacao foi igual ao PC.");                
                //Jogar mais uma vez?    
                printf("\n\nDeseja jogar novamente? (1-Sim/2-Nao)");
                scanf("%d",&r3);              
                if (r3==1)
                    {
                    goto start;
                    }   
                else
                    {
                    goto end;
                    }  
                }
        }
    }
    //Se o jogador decidir parar na primeira rodada
    else
    {
        printf("\n\nResultado Final");
        printf("\nVC = %d ", c1);
        printf("\nPC = %d ", c4);

        //Exibição do resultado
        //Como é impossivel estourar na 1ª rodada vamos direto para o resultado
        //Caso VC ganhar
            if(c1>c4)
                {
                printf("\nVoce ganhou!");
                printf("\nSua pontuacao foi maior que o PC.");
                //Jogar mais uma vez?    
                printf("\n\nDeseja jogar novamente? (1-Sim/2-Nao)");
                scanf("%d",&r3);
                if (r3==1)
                    {
                    goto start;
                    }
                else
                    {
                    goto end;
                    }
                }
        //Caso PC ganhar
            if(c1<c4)
                {
                printf("\nVoce Perdeu!");
                printf("\nSua pontuacao foi menor que o PC.");
                //Jogar mais uma vez?    
                printf("\n\nDeseja jogar novamente? (1-Sim/2-Nao)");
                scanf("%d",&r3);
                if (r3==1)
                    {
                    goto start;
                    }
                else
                    {
                    goto end;
                    }  
                }
        //Caso de empate           
            if(c1=c4)
                {
                printf("\nVoces empataram.");
                printf("\nSua pontuacao foi igual ao PC.");                
                //Jogar mais uma vez?    
                printf("\n\nDeseja jogar novamente? (1-Sim/2-Nao)");
                scanf("%d",&r3);              
                if (r3==1)
                    {
                    goto start;
                    }   
                else
                    {
                    goto end;
                    }  
                }
        }   
end:
printf("Obrigado por jogar, ate a proxima!");
getch();
}
