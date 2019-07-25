#include <stdio.h>
int main()
{
    int n, factor = 1;
    printf("Enter a number:\n");
    scanf("%d", &n);
    for (n; n >= 1; n--) {
            printf("%d\n", n-1);

    }

    return 0;
}
