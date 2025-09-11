#include <stdio.h>
int main() {
    float dollar, rupees;

    printf("Enter amount in dollars: ");
    scanf("%f", &dollar);

    rupees = dollar * 48;

    printf("%.2f Dollar = %.2f Rupees", dollar, rupees);

    return 0;
}
