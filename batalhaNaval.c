#include <stdio.h>


int main() {
 
    int escolha;
    
    printf("\n");
    printf("### Você deseja ver as coordenadas dos navios? (0 é água e 3 é o navio) ###\n");
    printf("### 1. Sim ###\n");
    printf("### 2. Não ###\n");
    scanf("%d", &escolha);

    switch (escolha){
        case 1:
            char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    
            printf(" TABULEIRO BATALHA NAVAL\n");
            printf("  ");
   
            for (int j = 0; j < 10; j++){
                printf("%c ", linha[j]); // Imprime os números das colunas
            }

            printf("\n");
    
            int tabuleiro[11][11] = 
            {{1, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0},
            {2, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0},
            {3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0},
            {4, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0},
            {5, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0},
            {6, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0},
            {7, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0},
            {8, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0},
            {9, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0},
            {10, 0, 0, 0, 3, 3, 3, 0, 0, 0, 0}};
    
            for (int j = 0; j < 10; j++){
            for (int i = 0; i < 10; i++){
           printf("%d ", tabuleiro[j][i]);
        }
        printf("\n");
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
