#include <stdio.h>

int main()
{

    int age;
    char name[50];

    printf("Enter your Name: ");
    scanf("%s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("My name is:%s\n", name);
    printf("My age is:%d\n", age);

    return 0;
}