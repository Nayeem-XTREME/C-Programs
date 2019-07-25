#include <stdio.h>
int main()
{
    char a[100], b[100];
    int i, j, len;

    printf("Enter 1st word:\n");
    gets(a);

    printf("Enter 2nd word:\n");
    gets(b);

    len = strlen(a);

    for (i = len, j =0; b[j] != '\0' ; i++, j++) {
        a[i] = b[j];
    }
    a[i] = '\0';

    printf("\n%s\n", a);

    return 0;
}
