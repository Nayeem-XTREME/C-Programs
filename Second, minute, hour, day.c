#include <stdio.h>
int main()
{
    int s, m, h, d, reminder;
    printf("This program measure the seconds, minutes, hour and day\nEnter the value of second: ");
    scanf("%d", &s);
    m = s / 60;
    reminder = s % 60;
    printf("\nThe number of minute are: %d", m);
    printf("\nRemaining seconds: %d", reminder);
    h = m / 60;
    printf("\nThe number of hour are: %d", h);
    d = h / 24;
    printf("\nThe number of day are: %d", d);
    return 0;
}
