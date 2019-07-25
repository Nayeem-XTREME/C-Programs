#include <stdio.h>
#include <math.h>
int main()
{
    float x1, x2, y1, y2, length;
    printf("Enter 1st point co-ordinate (x, y):\n");
    scanf("%f %f", &x1, &y1);
    printf("Enter 2nd point co-ordinate (x, y):\n");
    scanf("%f %f", &x2, &y2);
    length = sqrt ((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
    printf("Length is %f", length);
    return 0;

}
