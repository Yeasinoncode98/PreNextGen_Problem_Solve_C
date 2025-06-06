
#include <stdio.h>

int main()
{

    char string[100];
    int i = 0, count = 0;

    printf("Enter any word:\n");
    scanf("%s", string);

    while (string[i] != '\0')
    {
        if (string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u')
        {
            count++;
        }
        i++;
    }

    printf("Total Vowel: %d\n", count);

    return 0;
}