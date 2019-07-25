#include <stdio.h>
#include <math.h>
int main()
{
    int i, j, k, n2, flag, count;
    int A[10000];

    scanf("%d", &n2);

    for (j = 1, k = 0; j <= n2; j++, k++) {

        flag = 0;
		count = 0;

        for (i = 2; i <= sqrt(j); i++) {

            if (j % i == 0) {
                flag = 1;
                break;
            }


        }


        if (flag != 1) {
        	
        	A[k] = j;
        	printf("%d is prime\n", A[k]);
        	count++;	
		}
        
        

    }
    
    for (k = 0; k < count; k++)
        	printf("%d is prime\n", A[k]);
    return 0;
}
