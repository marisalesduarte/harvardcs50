#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{

    if (argc != 2)
    {
        printf("Use: ./caesar key\n");
        return 1;
    }

    for (int i = 0, n = strlen(argv[1]); i < n; i ++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Use: ./caesar key\n");
            return 1;
        }
    }

    int k = atoi(argv[1]);
    string plaintext = get_string("Texto: ");
    printf("Texto Cifrado: ");

    for (int i = 0, n = strlen(plaintext); i < n; i ++)
    {
        if (isupper(plaintext[i]))
        {
            printf("%c", (plaintext[i] - 65 + k) % 26 + 65);
        }
        else if (islower(plaintext[i]))
        {
            printf("%c", (plaintext[i] - 97 + k) % 26 + 97);
        }
        else
        {
            printf("%c", plaintext[i]);
        }
    }

    printf("\n");

}