#include <stdio.h>
int main()
{

    int n, all, total, free, empty;

    while (scanf("%d", &n) == 1) {

            total = n;
            all = n;

            while (total >= 3) {
                empty = total % 3;
                free = total / 3;

                total = free + empty;
                all = all + free;

                //if (total == 2)
                    //total++;
            }

        if (total == 2)
                //total++;
            printf("%d\n", all + 1);

        else
            printf("%d\n", all);

        }


    return 0;
}
