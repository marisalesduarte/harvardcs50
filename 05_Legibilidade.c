#include <stdio.h>
#include <cs50.h>
#include <math.h>
#include <string.h>


int main()
{
    int letras = 0;
    int palavras = 0;
    int frasess = 0;

    string text = get_string("Digite algo: ");

    for (int i = 0; i < strlen(text); i++)
    {
        if ((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z'))
        {
            letras++;
        }

        palavras = text[i] == ' ' ? palavras + 1 : palavras;
        frasess = (text[i] == '.' || text[i] == '!' || text[i] == '?') ? frasess + 1 : frasess;

    }

    palavras++;

    float L = (float)letras * 100 / (float) palavras;
    float S = (float) frasess * 100 / (float) palavras;
    float index = 0.0588 * L - 0.296 * S - 15.8;

    if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        if (index <= 1)
        {
            printf("Before Grade 1\n");
        }
        else
        {
            printf("Grade %i\n", (int)round(index));
        }
    }
    return 0;
}
