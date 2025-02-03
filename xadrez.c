#include <stdio.h>
#define limiteBispo 5
#define limiteTorre 5
#define limiteRainha 8

void Bisp()
{
    int bispMovement;
    printf("Digite quantas casas voce deseja mover o bispo\n", bispMovement);
    scanf("%d", &bispMovement);
    if (bispMovement < 1 || bispMovement > limiteBispo)
    {
        printf("Valor Invalido! o bispo apenas se move entre 1 e %d casas \n", limiteBispo);
    }
    for(int i = 0; i < bispMovement; i++){
    printf(" cima, direita\n");
    }

    printf("O Bispo se moveu %d casas para a diagonal superior direita\n", bispMovement);
}

void Rook()
{
    int rookMovement;
    printf("Digite quantas casas voce deseja mover a torre\n", rookMovement);
    scanf("%d", &rookMovement);
    if (rookMovement < 1 || rookMovement > limiteTorre)
    {
        printf("Valor Invalido! a torre se move apenas entre 1 e %d casas \n", limiteTorre);
    }
    printf("A torre se moveu %d casas para a direita", rookMovement);
}
void Queen()
{
    int queenMovement;
    printf("Digite quantos casas voce deseja mover a rainha\n", queenMovement);
    scanf("%d", &queenMovement);
    if (queenMovement < 1 || queenMovement > limiteRainha)
    {
        printf("Valor Invalido! a rainha pode se mover apenas entre 1 e %d casas \n", limiteRainha);
    }
    printf("A Rainha se moveu %d casas a esquerda", queenMovement);
}

void Sair()
{
    printf("Saindo do Programa...");
}
int main()
{
    int continuar;

    do
    {

        printf("\nMenu para mover pecas\n");

        printf("0. Sair\n");
        printf("1. Bispo\n");
        printf("2. Torre\n");
        printf("3. Rainha\n");

        scanf("%d", &continuar);

        switch (continuar)
        {
        case 1:
            Bisp();
            break;
        case 2:
            Rook();
            break;
        case 3:
            Queen();
            break;
        case 0:
            Sair();
            break;
        default:
            printf("Escolha uma opcao valida:\n");
        }
    } while (continuar);
}