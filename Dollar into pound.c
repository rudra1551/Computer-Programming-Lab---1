#include <stdio.h>
int main() {
    float dollar, pounds;

    printf("Enter amount in dollars: ");
    scanf("%f", &dollar);

    pounds = (dollar * 48) / 70;

    printf("%.2f Dollar = %.2f Pounds", dollar, pounds);

    return 0;
}
