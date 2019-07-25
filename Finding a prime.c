#include <stdio.h>
int main()
{
    int i, j, n1, n2, flag;

    printf("Enter starting number:\n");
    scanf("%d", &n1);
    printf("\n");

    printf("Enter ending number:\n");
    scanf("%d", &n2);
    printf("\n");

    for (j = n1; j <= n2; j++) {

        flag = 0;


        for (i = 2; i <= j/2; i++) {

            if (j % i == 0) {
                flag = 1;
                break;
            }


        }


        if (flag != 1)
            printf("%d is prime\n", j);

    }
    return 0;
}
