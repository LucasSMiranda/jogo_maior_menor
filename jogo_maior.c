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
    scanf (" %s" , &tipoComparacao);

    

    printf("Escolha o número (entre 1 e 100):");
    scanf(" %d", &numeroJogador);

    //Exibir o número do computador e jogador

        printf("Você escolheu o número %d e o número do computador é %d.\n", numeroJogador, numeroComputador);

    switch (tipoComparacao)
    {
    case 'M':
    case 'm':
    printf("Você escolheu a opção: MAIOR.\n");
        resultado = numeroJogador > numeroComputador ? 1 : 0;
        break;

    case 'N':
    case 'n':
    printf("Você escolheu a opção MENOR.\n");
        resultado = numeroJogador < numeroComputador ? 1 : 0;
        break;

    case 'I':
    case 'i':
    printf("Você escolheu a opção IGUAL.\n");
        resultado = numeroJogador == numeroComputador ? 1 : 0;
        break;
    
    
    default:
    printf("Opção inválida");
        break;
    }
        //Resultado do jogo

    

    if (resultado)
    {
        printf("Parabéns, você venceu!\n");
    }
    else
    {
        printf("Que pena, você perdeu.\n");
    }
    
    

      
   

    return 0;
}