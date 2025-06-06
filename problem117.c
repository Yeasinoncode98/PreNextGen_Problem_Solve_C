
#include <stdio.h>
#include <ctype.h>

int main()
{
    char string[100];
    int i = 0;

    printf("Enter a Word:\n");
    scanf("%s", &string);

    while (string[i] != '\0')
    {

        string[i] = toupper(string[i]);
        i++;
    }

    printf("Uppercase letter:%s\n", string);

    return 0;
}