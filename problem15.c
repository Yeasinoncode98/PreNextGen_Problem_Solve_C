#include <stdio.h>

int main()
{

    float n1; /*n1=20.20 n2=30.30*/
    float n2;
    printf("Enter First float number: ");
    scanf("%f", &n1);

    printf("Enter second float number: ");
    scanf("%f", &n2);

    float sum;
    sum = (n1 + n2);

    printf("Sum=%f", sum);

    return 0;
}