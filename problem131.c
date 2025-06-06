#include <stdio.h>
#include <string.h>

int main()
{
    char string[100];

    printf("Enter any word:\n");
    fgets(string, sizeof(string), stdin);

    if (string[0] == '\n')
    {
        printf("String is empty.\n :(");
    }
    else
    {
        printf("String is not empty.\n :)");
    }

    return 0;
}