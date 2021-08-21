#include <stdio.h>
void main()
{
    char charc;
    printf("Enter the character : \n");
    scanf(" %c", &charc);

    switch (charc)
    {
    case 'A':
        printf("Vowel");

        break;
    case 'a':
        printf("Vowel");

        break;

    case 'E':
        printf("Vowel");

        break;

    case 'e':
        printf("Vowel");

        break;

    case 'I':
        printf("Vowel");

        break;

    case 'i':
        printf("Vowel");

        break;

    case 'O':
        printf("Vowel");

        break;

    case 'o':
        printf("Vowel");

        break;

    case 'U':
        printf("Vowel");

        break;
    case 'u':
        printf("Vowel");
    default:
        printf("Consonant");
        break;
    }
}