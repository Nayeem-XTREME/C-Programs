#include <stdio.h>
#include <stdlib.h>
int main()
{
    int H, M;
    float D, E, a, b;

    for (; ;) {
        scanf("%d:%d", &H, &M);

        if (1 <= H <= 12 && 0 <= M <= 59) {

            if (H == 0 && M == 0)
                break;

            D = (30 * H) - (5.5 * M);
            E = 360 - ((30 * H) - (5.5 * M));

            a = abs(D);
            b = abs(E);

            if (D < E)
                printf("%0.3f\n", a);
            else
                printf("%0.3f\n", b);
        }

    }

    return 0;
}
