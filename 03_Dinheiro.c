#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main (void){
    float dinheiro;

    do {
      dinheiro = get_float("Qual é o troco? ");
    } while(dinheiro <= 0);

    // Ajustar Valor
    int ct = round(dinheiro * 100);
    int moedas = 0;

    // Comparação
    while (ct >= 25){
        ct -= 25;
        moedas ++;
    }

    while (ct >= 10){
        ct -= 10;
        moedas ++;
    }

    while (ct >= 5){
        ct -= 5;
        moedas ++;
    }

    while (ct >= 1){
        ct -= 1;
        moedas ++;
    }
    // Resultado em Moedas
    printf("Você vai precisar de %i moedas \n" , moedas);

}