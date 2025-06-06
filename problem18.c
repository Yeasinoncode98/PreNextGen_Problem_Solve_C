#include <stdio.h>

int main()
{
    int n1 = 40;
    int n2 = 30;
    int temp;

    temp = n1;
    n1 = n2;
    n2 = temp;

    printf("First swapped number:%d\n", n1);
    printf("Second swapped number:%d\n", n2);

    return 0;
}