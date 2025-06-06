#include <stdio.h>
int main()
{

    int arr[5], sum = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Enter %d number: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Sum= %d", sum);

    return 0;
}