#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>

int main() {
   //CABEÇALHO DO JOGO
printf("*********************************\n");
printf("|Bem vindo ao jogo de advinhacao|\n");
printf("*********************************\n");

Sleep(2000);

 printf("Voce consegue acertar o numero secreto? \n\n");

Sleep(2000);

int segundos = time(0);
srand(segundos);
int numerogrande = rand();
int numerosecreto = numerogrande % 101;

int chute;
int tentativas = 1;

double pontos = 1000;

int ganhou = 0;
while(ganhou == 0){
    printf("Tentativa %d\n", tentativas);

    printf("Escolha um numero de 0 a 100: \n");
    scanf("%d", &chute);


    if(chute < 0) {
        printf("Numero invalido\n");

    } else if(chute > 100) {
        printf("numero invalido\n");

    } else if(chute < numerosecreto) {
        printf("O numero secreto e maior\n");
    } else if(chute > numerosecreto) {
        printf("O numero secreto e menor\n");
    } else if(chute = numerosecreto) {
        printf("Ok, voce venceu!\n");
		printf("Voce acertou na tentativa %d\n", tentativas);
        ganhou = 1;
 }
tentativas  = tentativas + 1;

double pontosperdidos = (chute - numerosecreto) / 2.0;
if(pontosperdidos <0) {
        pontosperdidos = pontosperdidos * -1;
}
pontos = pontos - pontosperdidos;



}
printf("Fim de jogo!\n");
printf("Total de pontos: %.1f\n", pontos);
Sleep(5000);

}
