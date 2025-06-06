#include <stdio.h>
int main()
{
    int temp;

    printf("Enter Temperrature: ");
    scanf("%d", &temp);

    if (temp > 30)
    {
        printf("(%d degree) Todays weather is hot\n", temp);
    }

    else
    {
        printf("(%d degree) Todays weather is not hot\n", temp);
    }

    return 0;
}