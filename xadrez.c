#include <stdio.h>

int main() {
    int menu;

    do {
        printf("\n### MENU DE XADREZ ###\n");
        printf("1. Mover a Torre\n");
        printf("2. Mover o Bispo\n");
        printf("3. Mover a Rainha\n");
        printf("4. Mover o Cavalo\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &menu);

        switch (menu) {
            case 1:
                printf("\nMovimento da Torre:\n");
                for (int i = 1; i <= 5; i++) {
                    printf("Direita\n");
                }
                break;

            case 2:
                printf("\nMovimento do Bispo:\n");
                int b = 1;
                while (b <= 5) {
                    printf("Cima, Direita\n");
                    b++;
                }
                break;

            case 3:
                printf("\nMovimento da Rainha:\n");
                int q = 1;
                do {
                    printf("Esquerda\n");
                    q++;
                } while (q <= 8);
                break;

            case 4:
                printf("\nMovimento do Cavalo:\n");

                for (int i = 0; i < 2; i++) 
                {
                    printf("Baixo\n");
                    for (int j = 0; j < 1; j++) 
                    {
                        if (i == 1) { 
                            printf("Esquerda\n");
                        }
                    }
                }
                break;
            case 0:
                printf("Saindo do jogo...\n");
                break;

            default:
                printf("Opcao invalida! Tente novamente.\n");
                break;
        }

    } while (menu != 0); // o loop continua enquanto a opção não for sair

    return 0;
}