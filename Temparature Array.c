#include <stdio.h>
int main()
{
    int temp[30], n, i, j, m, k, p, q;

    printf("Enter total no. of temparature (maximum 30):\n");
    scanf("%d", &n);

    printf("\n");

    for (i=1; i<=n; i++) {
        printf("Enter temparature of hour %d\n", i);
        scanf("%d", &temp[i]);
    }

    m = temp[1];
    p = 1;
    k = temp[1];
    q = 1;

    for (i=2; i<=n; i++) {
        if (m < temp[i]) {
            m = temp[i];
            p = i;
        }

        if (k>temp[i]) {
            k = temp[i];
            q = i;
        }
    }

    printf("\n");
    printf("Max temarature = %d\nTime of max temparature = %d\n", m, p);
    printf("\n");
    printf("Minimum temparature = %d\nTime of minimum temparature = %d\n", k, q);

    return 0;
}
