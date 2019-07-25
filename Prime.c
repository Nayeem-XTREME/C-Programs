#include <stdio.h>
int main()
{
    int n, i, flag = 0;
    printf("Enter an integer:\n");
    scanf("%d", &n);
    for (i = 2; i <= n/2; i++) {
        if (n % i ==0) {
            flag =1;
            break;
            }
        }
        if (flag == 1)
            printf("%d is not prime\n", n);
        else
            printf("%d is prime\n", n);
        return 0;
}
