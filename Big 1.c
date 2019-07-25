#include <stdio.h>
int main()
{
    char c;
    printf("Enter a character:\n");
    scanf("%c", &c);
    if (islower(c)) {
        printf("%c", toupper(c));
    }
    else
        printf("%c", c);
    return 0;
}
