#include <stdio.h>
int main()
{
    char str[100], str2[100];
    int i, j, len = 0;

    gets(str);

    for (i = 0; str[i] != '\0'; i++) {
        len = len + 1;
    }

    for (j = len, i = 0; j >= 0; j--, i++ ) {
         str2[i] = str[j];
        printf("%c", str2[i]);
    }

    return 0;
}
