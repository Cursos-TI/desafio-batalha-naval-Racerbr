#include <stdio.h>


int main() {
    
    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int coluna[10] =   
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    
    
    printf(" TABULEIRO BATALHA NAVAL\n");
    printf("  ");
   
    for (int j = 0; j < 10; j++){
        printf("%c ", linha[j]); // Imprime os números das colunas
    }
    
        
    
        int tabuleiro[10][10] = {
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    };
   
    for (int i = 0; i < 10; i++){
        printf("\n%d", coluna[i]);
        printf(" %d", tabuleiro[i][i]);
        printf(" %d", tabuleiro[i][i]);
        printf(" %d", tabuleiro[i][i]);
        printf(" %d", tabuleiro[i][i]);
        printf(" %d", tabuleiro[i][i]);
        printf(" %d", tabuleiro[i][i]);
        printf(" %d", tabuleiro[i][i]);
        printf(" %d", tabuleiro[i][i]);
        printf(" %d", tabuleiro[i][i]);
        printf(" %d", tabuleiro[i][i]);
    }

    
    int escolha;
    
    printf("\n");
    printf("### Você deseja ver as coordenadas dos navios? (0 é água e 3 é o navio) ###\n");
    printf("### 1. Sim ###\n");
    printf("### 2. Não ###\n");
    scanf("%d", &escolha);

    switch (escolha){
        case 1:
            char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
            int coluna[10] =   
            {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    
    
            printf(" TABULEIRO BATALHA NAVAL\n");
            printf("  ");
   
            for (int j = 0; j < 10; j++){
                printf("%c ", linha[j]); // Imprime os números das colunas
            }
    
        
    
            int tabuleiro[10][10] = {
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 3, 3, 3, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
            };
   
            for (int i = 0; i < 10; i++){
                printf("\n%d", coluna[i]);
                printf(" %d", tabuleiro[i][i]);
                printf(" %d", tabuleiro[i][i]);
                printf(" %d", tabuleiro[i][4]);
                printf(" %d", tabuleiro[i][5]);
                printf(" %d", tabuleiro[i][6]);
                printf(" %d", tabuleiro[i][i]);
                printf(" %d", tabuleiro[0][i]);
                printf(" %d", tabuleiro[1][i]);
                printf(" %d", tabuleiro[2][i]);
                printf(" %d", tabuleiro[i][i]);
        }
        break;
        case 2:
        printf("### Saindo... ###\n");
        break;
        default:
        printf("### Opção inválida! Tente novamente ###\n");
        break;
    }

    return 0;
}
