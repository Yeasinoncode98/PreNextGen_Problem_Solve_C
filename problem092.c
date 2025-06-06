#include <stdio.h>
int main()
{

    int age[5];

    for (int i = 0; i < 5; i++)
    {

        printf("Enter %d number: ", i + 1);
        scanf("%d", &age[i]);
    }

    for (int i = 0; i < 5; i++)
    {

        printf("%d \n", age[i]);
    }

    return 0;
}