#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *getln();
int words(char *str);
void printReversed(char *str);
int main(void)
{
    printf("Enter the string: ");
    char *str = getln();

    printf("Entered String: %s\n", str);
    int strlength = strlen(str);
    printf("Number of words: %d\n", words(str));
    int size = words(str);

    printf("Reversed String: ");
    printReversed(str);
    return 0;
}
char *getln()
{
    int size = 2, i = 0;
    char *str = (char *)malloc(size * sizeof(char));
    char c;
    while (true)
    {
        c = getc(stdin);
        if (c == '\n' || c == EOF)
            break;
        if (size <= i)
        {
            size *= 2;
            str = realloc(str, size);
        }
        str[i++] = c;
    }
    str[i] = '\0';
    return str;
}
int words(char *str)
{
    int size = strlen(str), words = 0;
    for (int i = 0; i < size; i++)
        if (str[i] == ' ')
            words++;
    return (words + 1);
}
void printReversed(char *str)
{
    char whitespace = ' ';
    int characters = 0;
    int size = strlen(str);
    for (int i = (size - 1); i > -1; i--)
    {
        characters++;
        if (str[i] == whitespace)
        {
            for (int j = (i + 1); j < (i + characters); j++)
            {
                printf("%c", str[j]);
            }
            characters = 0;
            printf(" ");
        }
    }
    // Print the first word
    for (int i = 0; str[i] != ' '; i++)
    {
        printf("%c", str[i]);
    }
    printf("\n");
}