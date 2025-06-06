#include <stdio.h>
#include <string.h>

int main()
{

    char str1[100], str2[100];

    printf("Enter 1st string: ");
    scanf("%s", str1);

    printf("Enter 2nd string: ");
    scanf("%s", str2);

    strcat(str1, str2);

    printf("Together string :%s", str1);

    return 0;
}