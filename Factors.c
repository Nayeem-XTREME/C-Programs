#include <stdio.h>
int main()
{
    int i, n, j;
    printf("Enter n:\n");
    scanf("%d", &n);

    for (i=1; i<=n; i++) {
        if (n % i == 0) {
            printf("Factor is %d\n", i);
        }
    }
    return 0;
}
