#include <stdio.h>
int main()
{
    int a;
    printf("Enter consumption unit:\n");
    scanf("%d", &a);
    if (a>=0 && a<=200)
        printf("Rs. 0.50 per unit\n");
    else if (a>=201 && a<=400)
        printf("Rs. 1.00 plus Rs. 0.65 per unit excess of 200\n");
    else if (a>=401 && a<=600)
        printf("Rs. 2.30 plus Rs. 0.80 per unit excess of 400\n");
    else if (a>=601)
        printf("Rs. 3.90 plus Rs. 1.00 per unit excess of 600\n");
    else
        printf("Invalid unit\n");
    return 0;
}
