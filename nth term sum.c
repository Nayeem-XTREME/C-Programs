#include <stdio.h>
int main()
{
    int n, factor = 1;
    printf("Enter a number:\n");
    scanf("%d", &n);
    for (n; n >= 1; n--) {
        factor = factor * n;
    }
    printf("%d\n", factor);
    return 0;
}
