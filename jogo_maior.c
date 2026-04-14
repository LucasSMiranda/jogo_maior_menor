#include <stdio.h>
#include <time.h>

int main() {

    int numeroJogador, numeroComputador, resultado;
    char tipoComparacao;

    //Gerador de números aleatórios

    srand (time(0));
    numeroComputador = rand() % 100 + 1;//Número entre 1 e 100

    //Início do jogo

    printf("Bem vindo ao jogo de maior, menor ou igual.\n");
    printf("Você deve escolher um número e um tipo de comparação.\n");
    printf("M. Maior\n");
    printf("N. Menor\n");
    printf("I.Igual\n");

    printf("Escolha a comparação:");
    scanf(" %c", &tipoComparacao);

    printf("Escolha o número (entre 1 e 100):");
    scanf(" %d", &numeroJogador);

    //Exibir o número do computador

    printf("O número do computador é : %d\n", numeroComputador);


    
   

    return 0;
}