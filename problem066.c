#include <stdio.h>
int main()
{
    int i, N;
    printf("Enter a Number: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++)
    {
        if (N % i == 0)
        {
            printf("%d\n", i);
        }
    }
}