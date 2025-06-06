#include <stdio.h>

int main()
{
    int score1;

    printf("Enter score: ");
    scanf("%d", &score1);

    if (score1 >= 80)
    {
        printf("The student got (Grade-A Mark-%d)\n", score1);
    }

    else if (score1 >= 60)
    {
        printf("The student got (Grade-B Mark-%d)\n", score1);
    }

    else if (score1 >= 40)
    {
        printf("The student got (Grade-C Mark-%d)\n", score1);
    }

    else
    {
        printf("The student is fail\n");
    }

    return 0;
}