#include <stdio.h>
int main() {
    float rupees, dollar;

    printf("Enter amount in rupees: ");
    scanf("%f", &rupees);

    dollar = rupees / 48;

    printf("%.2f Rupees = %.2f Dollars", rupees, dollar);

    return 0;
}
