#include <stdio.h>

int main()
{

    int arr[5], max;

    for (int i = 0; i < 5; i++)
    {
        printf("Enter number %d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    max = arr[0];

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    printf("Max Number:%d\n", max);

    return 0;
}