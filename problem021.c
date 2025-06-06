#include <stdio.h>

int main()
{
    char ch;
    char nextchar;

    printf("Enter character: ");
    scanf("%c", &ch);

    nextchar = ch + 1;

    printf("Next Character: %c", nextchar);

    return 0;
}