#include <stdio.h>
int main()
{
    int n, d, e;
    int sum = 0;

    printf("Enter the 1st number:\n");
    scanf("%d", &n);
    printf("Enter the limit:\n");
    scanf("%d", &e);
    printf("Enter the difference:\n");
    scanf("%d", &d);

    for (n; n <= e; n = n + d) {
        sum += n;
    }
    printf ("Sum is %d\n", sum);
    return 0;
}
