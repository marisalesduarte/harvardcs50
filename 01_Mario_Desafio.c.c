#include <stdio.h>
#include <cs50.h>

int main (void) {
    int altura, col, linha, spc, gap;
    do {
      altura = get_int ("Informe a altura: ");
    } while(altura < 1 || altura > 8);

    // Linhas
    for (linha = 0 ; linha < altura ; linha++){

        for (spc = 0; spc < altura - linha - 1; spc ++){
            printf(" ");
        }

        // Colunas
        for(col = 0 ; col <= linha ; col ++){
            printf("#");
        }


        for (gap = 0; gap <= altura -1; gap = altura){
            printf("  ");
        }

        for(col = 0 ; col <= linha ; col ++){
            printf("#");
        }
        printf("\n");
    }

}