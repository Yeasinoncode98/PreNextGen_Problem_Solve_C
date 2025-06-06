
#include <stdio.h>
#include <string.h>

int main()
{

    char str[100];

    printf("Enter any Name: ");
    scanf("%s", str);

    if (strlen(str) == 0)
    {
        printf("It is empty\n");
    }

    else
    {
        printf("It is not empty:\n");
    }

    return 0;
}