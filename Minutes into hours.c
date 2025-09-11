#include <stdio.h>
int main() {
    int minutes, hours;

    printf("Enter minutes: ");
    scanf("%d", &minutes);

    hours = minutes / 60;

    printf("%d minutes = %d hours", minutes, hours);

    return 0;
}
