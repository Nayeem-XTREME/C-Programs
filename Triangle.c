#include <stdio.h>
int main()
{
    int i, j, k, n, a;

    printf("Enter no. of lines:\n");
    scanf("%d", &n);

    printf("\n");


    for (i=0;i<n; i++) {

        for (j=n; j>i; j--) {
            printf(" ");
        }


        for (k=0; k<i+1; k++) {
            printf("* ");
        }

        printf("\n");
    }


    return 0;

}
