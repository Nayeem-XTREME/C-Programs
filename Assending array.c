#include <stdio.h>
int main()
{
    int num[30];
    int n, i, j, a;

    printf("Enter the size of the array:\n");
    scanf("%d", &n);

    printf("\nEnter numbers:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (num[i] > num[j]) {
                a = num[i];
                num[i] = num[j];
                num[j] = a;
            }
        }
    }

    printf("The numbers arranged in ascending order are given below:\n");
    for (i = 0; i < n; i++) {
        printf("%d\n", num[i]);
    }

    return 0;
}
