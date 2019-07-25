#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, x;
    float k;
    printf("Enter a:\n");
    scanf("%d", &a);
    printf("Enter b:\n");
    scanf("%d", &b);
    printf("Enter x:\n");
    scanf("%d", &x);
    k=sqrt(a*a+b*b-2*a*b*cos(x));
    printf("Result=%f", k);
    return 0;
}
