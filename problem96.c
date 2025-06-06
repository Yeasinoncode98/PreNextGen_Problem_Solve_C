#include <stdio.h>

int main()
{

    int arr[5], min;

    for (int i = 0; i < 5; i++)
    {
        printf("Enter number %d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    min = arr[0];

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    printf("Min Number:%d\n", min);

    return 0;
}