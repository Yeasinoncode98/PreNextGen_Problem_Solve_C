
#include <stdio.h>

int main()
{

    char string[100];
    int i, length = 0;

    printf("Enter any word:\n");
    scanf("%s", string);

    while (string[length] != '\0')
    {
        length++;
    }

    printf("Reversed Word:\n");

    for (i = length - 1; i >= 0; i--)
    {
        printf(" %c", string[i]);
    }

    printf("\n");

    return 0;
}