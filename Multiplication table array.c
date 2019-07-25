#include <stdio.h>
int main()
{
    int arr[15][15];
    int n, m, i, j;

    printf("Enter the size of the array:\n");
    scanf("%d", &n);

    printf("Enter the limit:\n");
    scanf("%d", &m);

    for (i = 1; i <= m; i++) {
        for (j = 1; j <= n; j++) {
            arr[i][j] = i * j;
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}
