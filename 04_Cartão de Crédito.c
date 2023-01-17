#include <stdio.h>
#include <cs50.h>

int main (void){
    long cartao;
    do {
        cartao = get_long("Digite o número do cartão de crédito: ");
    } while(cartao < 0);

    int cartao1, cartao2, cartao3, cartao4, cartao5, cartao6, cartao7, cartao8;

    cartao1 = ((cartao % 100)/10*2);
    cartao2 = ((cartao % 10000)/1000*2);
    cartao3 = ((cartao % 1000000)/100000*2);
    cartao4 = ((cartao % 100000000)/10000000*2);
    cartao5 = ((cartao % 10000000000)/1000000000*2);
    cartao6 = ((cartao % 1000000000000)/100000000000*2);
    cartao7 = ((cartao % 100000000000000)/10000000000000*2);
    cartao8 = ((cartao % 10000000000000000)/1000000000000000*2);

    cartao1 = (cartao1 % 100/10) + (cartao1 % 10);
    cartao2 = (cartao2 % 100/10) + (cartao2 % 10);
    cartao3 = (cartao3 % 100/10) + (cartao3 % 10);
    cartao4 = (cartao4 % 100/10) + (cartao4 % 10);
    cartao5 = (cartao5 % 100/10) + (cartao5 % 10);
    cartao6 = (cartao6 % 100/10) + (cartao6 % 10);
    cartao7 = (cartao7 % 100/10) + (cartao7 % 10);
    cartao8 = (cartao8 % 100/10) + (cartao8 % 10);

    int soma = cartao1 + cartao2 + cartao3 + cartao4 + cartao5 + cartao6 + cartao7 + cartao8;

    int cartao9, cartao10, cartao11, cartao12, cartao13, cartao14, cartao15, cartao16;

    cartao9 = (cartao % 10);
    cartao10 = ((cartao % 1000)/100);
    cartao11 = ((cartao % 100000)/10000);
    cartao12 = ((cartao % 10000000)/1000000);
    cartao13 = ((cartao % 1000000000)/100000000);
    cartao14 = ((cartao % 100000000000)/10000000000);
    cartao15 = ((cartao % 10000000000000)/1000000000000);
    cartao16 = ((cartao % 1000000000000000)/100000000000000);

    int soma1 = cartao9 + cartao10 + cartao11 + cartao12 + cartao13 + cartao14 +
        cartao15 + cartao16;

    int soma2 = soma + soma1;

    int length = 0;
    long visa = cartao;
    long amex = cartao;
    long master = cartao;

    if ((soma2 % 10)!=0){
        printf("%s\n" , "INVÁLIDO");
        return 0;
    }

    // Diferenciar Cartões

    while (cartao > 0 ){
        cartao = cartao / 10;
        length++;
    }

    // VISA
    while (visa >= 10){
        visa /= 10;
    }
    if (visa == 4 && (length == 13 || length == 16)){
        printf("%s\n" , "VISA");
        return 0;
    }

    // AMEX
    while (amex >= 10000000000000){
        amex /= 10000000000000;
    }
    if (length == 15 && (amex == 34 || amex == 37)){
        printf("%s\n" , "AMEX");
        return 0;
    }

    // MASTER
    while(master >= 100000000000000){
        master /= 100000000000000;
    }
    if (length == 16 && (master >= 51 && master <= 55)){
        printf("%s\n", "MASTER");
        return 0;
    }
    else {
        printf("%s\n", "INVÁLIDO");
        return 0;
    }

 }