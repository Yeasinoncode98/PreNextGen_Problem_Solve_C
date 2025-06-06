#include <stdio.h>
#include <string.h>

int main()
{

    char str[100];
    int length;

    printf("Give Name Of Anything:\n");
    scanf("%s", str);

    length = strlen(str);

    printf("Length of Any line : %d", length);

    return 0;
}