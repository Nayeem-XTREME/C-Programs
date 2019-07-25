#include <stdio.h>
int main()
{
    int a;
    printf("Enter consumption unit:\n");
    scanf("%d", &a);
    switch (a/100)
    {
        case 0: printf("Rs 0.50 per unit\n");break;
        case 1: printf("Rs 0.50 per unit\n");break;
        case 2: printf("Rs 1.00 plus Rs. 0.65 per unit excess of 200\n");break;
        case 3: printf("Rs 1.00 plus Rs. 0.65 per unit excess of 200\n");break;
        case 4: printf("Rs 2.30 plus Rs. 0.80 per unit excess of 400\n");break;
        case 5: printf("Rs 2.30 plus Rs. 0.80 per unit excess of 400\n");break;
        case 6: printf("Rs 3.90 plus Rs. 1.00 per unit excess of 600\n");break;
        case 7: printf("Rs 3.90 plus Rs. 1.00 per unit excess of 600\n");break;
        case 8: printf("Rs 3.90 plus Rs. 1.00 per unit excess of 600\n");break;
        case 9: printf("Rs 3.90 plus Rs. 1.00 per unit excess of 600\n");break;
        case 10: printf("Rs 3.90 plus Rs. 1.00 per unit excess of 600\n");break;
        case 11: printf("Rs 3.90 plus Rs. 1.00 per unit excess of 600\n");break;
        case 12: printf("Rs 3.90 plus Rs. 1.00 per unit excess of 600\n");break;
        case 13: printf("Rs 3.90 plus Rs. 1.00 per unit excess of 600\n");break;
        case 14: printf("Rs 3.90 plus Rs. 1.00 per unit excess of 600\n");break;
        case 15: printf("Rs 3.90 plus Rs. 1.00 per unit excess of 600\n");break;
        case 16: printf("Rs 3.90 plus Rs. 1.00 per unit excess of 600\n");break;
    }

    return 0;
}
