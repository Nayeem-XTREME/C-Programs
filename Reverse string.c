#include <stdio.h>
int main()
{
    char str[30];
    int i, j, a, length = 0;

    gets(str);

    for (i = 0; str[i] != '\0'; i++) {
        length = length + 1;
    }

    for (j = length - 1; j >= 0; j--) {
        printf("%c", str[i]);
    }

    printf("\n");

    return 0;
}
