
#include <stdio.h>

int main()
{

    char string[100];
    int i = 0, j = 0;

    printf("Enter a Line:\n");
    fgets(string, sizeof(string), stdin);

    while (string[i] != '\0')
    {
        if (string[i] != ' ')
        {
            string[j] = string[i];
            j++;
        }
        i++;
    }
    string[j] = '\0';

    printf("Without space: %s\n", string);

    return 0;
}