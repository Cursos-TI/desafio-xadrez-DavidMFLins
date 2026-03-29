#include <stdio.h>

//recursividade para movimento da torre
void movimentotorre (int numero){
    if (numero > 0){
    movimentotorre(numero - 1);
    printf("Direita\n");
    }
}

//recursividade para movimento do bispo
void movimentobispo (int numero){
    if (numero > 0){
        movimentobispo(numero - 1);
        // loop externo
        for (int v = 0; v < 1; v++) {
            printf("Cima\n");
            // loop interno
            for (int h = 0; h < 1; h++) {
                printf("Direita\n");
            }
        }
    }
}

//recursividade para a rainha
void movimentorainha (int numero){
    if (numero > 0){
    printf("Esquerda\n");
    movimentorainha(numero - 1);
    }
}

int main() {
    int menu;

    do {
        //Menu
        printf("\n### MENU DE XADREZ ###\n");
        printf("1. Mover a Torre\n");
        printf("2. Mover o Bispo\n");
        printf("3. Mover a Rainha\n");
        printf("4. Mover o Cavalo\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &menu);

        //escolha do menu com switch
        switch (menu) {
            case 1:
                //5 casas de movimentação
                movimentotorre(5);
                break;

            case 2:
                //5 casas de movimentação
                movimentobispo(5);
                break;

            case 3:
                //8 casas de movimentação
               movimentorainha(8);
                break;

            case 4:
                printf("\nMovimento do Cavalo:\n");
                // multiplas variaveis
                for (int i = 1, j = 1; i <= 3; i++) {
                    if (i <= 2) {
                        printf("Cima\n");
                        continue; // pula
                    }
                    // chega aqui quando acaba a primeira parte do codigo
                    printf("Direita\n");
                    break; 
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