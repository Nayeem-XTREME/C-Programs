#include <stdio.h>
int main()
{
    int hs, os;
    for (; scanf("%d %d", &hs, &os) != EOF ; ) {


        if (hs > os)
            printf("%d\n", hs - os);
        else
            printf("%d\n", os - hs);
    }

    return 0;
}
