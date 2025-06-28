#include<stdio.h>
int main() {
    char ch;
    scanf("%c", &ch);
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U') {
            printf("%c is a vowel\n", ch);
        }
        else {
            printf("%c is a consonant\n", ch);
        }
    } else {
        printf("%c is not an alphabet\n", ch);
    }
    return 0;
}
