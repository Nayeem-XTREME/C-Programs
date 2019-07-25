#include <stdio.h>
int main()
{
    int i, j, k, l,x, n;

    printf("Enter no. of lines:\n");
    scanf("%d", &n);

    for (x=0; x<n; x++) {

        for (i=0; i<n; i++) {

            for (j=0; j<i+1; j++) {
                printf("* ");
            }

            printf("\n");

        }

        for (k=0; k<n; k++) {

            for (l=n; l>k-1; l--) {
                printf("* ");
            }

            printf("\n");

        }

    }

    printf("*");

    return 0;
}
