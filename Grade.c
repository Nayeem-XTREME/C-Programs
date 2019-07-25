#include <stdio.h>
int main()
{
    char c;
    int a, b;
    printf("Enter +, -, * or /:\n");
    scanf("%c", &c);
    printf("Enter 2 numbers:\n");
    scanf("%d %d", &a, &b);
    switch (c)
    {
        case '+': printf("%d + %d = %d", a, b, a+b);break;
        case '-': printf("%d - %d = %d", a, b, a-b);break;
        case '*': printf("%d * %d = %d", a, b, a*b);break;
        case '/': printf("%d / %d = %d", a, b, a/b);break;
    }
    return 0;
}
