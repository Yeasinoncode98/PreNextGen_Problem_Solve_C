#include <stdio.h>

int main()
{

    int N, i;

    printf("Enter a number (N): ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++)
    {
        printf("%d\n", i);
    }

    return 0;
}