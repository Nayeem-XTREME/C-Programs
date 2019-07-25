#include <stdio.h>
int main()
{
    int arr[20], earr[15], oarr[15];
    int i, j = 0, k = 0, n;

    printf("Enter the size of the array:\n");
    scanf("%d", &n);

    printf("\nEnter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        //printf("\n");
    }

    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            earr[j] = arr[i];
            j++;
        }
        else {
            oarr[k] = arr[i];
            k++;
        }
    }

    printf("\nThe elements of even array are:\n");
        for (i = 0; i < j; i++) {
            printf("%d\n", earr[i]);
    }

    printf("\nThe elements of odd array are:\n");
        for (i = 0; i < k; i++) {
            printf("%d\n", oarr[i]);
    }

    return 0;

}
