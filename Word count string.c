#include <stdio.h>
int main()
{
    int i, j, count = 0;
    char str1[100], str2[50], str3[50];

    printf("Enter the text:\n");
    gets(str1);
    printf("Enter the word to count:\n");
    gets(str2);

    for (i = 0; str1[i] != '\0'; ) {
        for (j = 0; str1[i] != ' ' && str1 != '\0'; j++) {
            str3[j] = str1[i];
        }

        str3[j] = '\0';

        if ((strcmp(str2, str3)) == 0) {
            count = count + 1;
        }

        if (str1[i] == '\0')
            break;
        else
            i++;
    }

    printf("No. of words are %d\n", count);
    return 0;
}
