#include <stdio.h>
int main()
{
    int a, b, c, d, k;
    printf("Enter four numbers:\n");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if (a>b)
        k = a;
    if (b>c)
        k = b;
    if (c>d)
        k = c;
    else
        k = d;
    printf("Big = %d", k);
    return 0;
}
