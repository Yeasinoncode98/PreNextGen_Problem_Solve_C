#include <stdio.h>
int main()

{
    int age;

    printf("Enter Age: ");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("%d can vote\n", age);
    }

    else
    {
        printf("%d can't vote\n", age);
    }
    return 0;
}