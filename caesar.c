#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    // if program has no command-line argument or more than one, trigger error message explaining syntax along with return 1
    if (argc < 2 || argc > 2)
    {
        printf("Must provide One Integer Argument...\n");
        return 1;
    }

    // Get single command-line argument (k) and ensure it is a decimal
    string stringToConvert = argv[1];

    // atoi will return 0 if it argv[1] is a non-numeric string that cannot be interpreted as integer
    int convertedString = atoi(stringToConvert);

    // if cli argument != decimal "Usage: ./caesar key" and return 1
    if (convertedString == 0)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    // Program must now prompt for plaintext as input

    string plainText = get_string("Plaintext:  ");

    long k = convertedString;

    printf("CipherText: ");


    // Calculate Caesar formula
    for (int i = 0, length = strlen(plainText); i < length; i++)
    {
        char c = plainText[i];

        if (c >= 'A' && c <= 'Z')
        {
            c = (c - 'A' + k) % 26 + 'A';
        }

        else if (c >= 'a' && c <= 'z')
        {
            c = (c - 'a' + k) % 26 + 'a';
        }
        // Program must output ciphertext:
        printf("%c", c);

    }

    printf("\n");

}
