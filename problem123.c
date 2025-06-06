
#include <stdio.h>
#include <string.h>

int main()
{
    char string[100];

    int i, length;

    printf("Enter a Word:\n");
    scanf("%s", string);

    length = strlen(string);

    for (i = 0; i < length / 2; i++)
    {
        if (string[i] != string[length - 1 - i])
        {
            printf("The word is  not a palindrome\n");
            return 0;
        }
    }

    printf("The word is a palindrome\n");

    return 0;
}