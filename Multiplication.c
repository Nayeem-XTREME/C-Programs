#include <stdio.h>
int main()
{
    int n, i, j;
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 5; j++) {
            printf("%d %d\n", i, j);
        }
    }
    return 0;
}
