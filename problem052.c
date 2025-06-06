#include <stdio.h>

int main()
{

    int i, N;

    printf("Enter a number (N): ");
    scanf("%d", &N);

    for (i = N; i >= 1; i--)
    {
        printf("Reverse Numbers are : %d\n", i);
    }

    return 0;
}