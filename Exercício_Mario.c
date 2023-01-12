#include <cs50.h>
#include <stdio.h>

int main(void)
{
     //  Pede o valor da altura para o usuário
    int altura;
    do
    {
          altura = get_int("Informe a altura: ");
    }
    while (altura < 1 || altura > 8);

    // Imprima a pirâmide
    for(int x = 0; x < altura; x++)
    {

        for(int y = 0; y < altura; y++)
        {
            //Para espaços em branco
            if(x+y < altura - 1)
            {
                printf(" ");
            }
            else {
                printf("#");
            }
        }
    	printf("\n");
    }
}
