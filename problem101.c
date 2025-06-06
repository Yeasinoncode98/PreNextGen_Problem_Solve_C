#include <stdio.h>
int main()
{

    int arr[5];
    int sum = 0;

    float average;

    for (int i = 0; i < 5; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    average = (float)sum / 5;

    printf("Average : %.2f\n", average);

    return 0;
}