#include <stdio.h>

int main() {
    float gross_sales, net_sales, discount;
    scanf("%f", &gross_sales);
    discount = 0.10 * gross_sales;
    net_sales = gross_sales - discount;
    printf("%.2f\n", net_sales);
    return 0;
}
