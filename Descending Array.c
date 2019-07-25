#include <stdio.h>
void main()
{
    int num[30], n;
    int i, j, temp;

    printf("Enter the size of array:\n");
    scanf("%d", &n);

    printf("Enter the numbers:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (num[i] < num[j]) {
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }

    printf("The numbers arranged in descending order are given below:\n");
    for (i = 0; i < n; i++) {
        printf("%d\n", num[i]);
    }

    return 0;
}
