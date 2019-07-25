#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two number a and b: \n");
    scanf("%d %d", &a, &b);
    if (a >= b) {
        printf("a is greater than b\n");
    }
    else if (a <= b) {
        printf("b is greater than a\n");
    }
    else {
        printf(" a is equal to b");
    }
    return 0;
}
