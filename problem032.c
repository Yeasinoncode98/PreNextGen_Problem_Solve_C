#include <stdio.h>
int main()
{
    int temp;

    printf("Enter Temperrature: ");
    scanf("%d", &temp);

    if (temp < 15)
    {
        printf("(%d degree) Todays weather is cold\n", temp);
    }

    else
    {
        printf("(%d degree) Todays weather is not cold\n", temp);
    }

    return 0;
}