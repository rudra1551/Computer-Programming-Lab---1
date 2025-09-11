#include <stdio.h>

int main() {
    float gross_salary, net_salary;
    float allowances, deductions;
    printf("Enter the gross salary: ");
    scanf("%f", &gross_salary);
    allowances = 0.10 * gross_salary;
    deductions = 0.07 * gross_salary;
    net_salary = gross_salary + allowances - deductions;
    printf("Net salary = %.2f\n", net_salary);

    return 0;
}
