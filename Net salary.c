#include <stdio.h>

int main() {
    float gross_salary, net_salary;
    float allowances, deductions;

    // Input gross salary
    printf("Enter the gross salary: ");
    scanf("%f", &gross_salary);

    // Calculate allowances and deductions
    allowances = 0.10 * gross_salary;  // 10% of gross salary
    deductions = 0.07 * gross_salary;  // 7% of gross salary

    // Calculate net salary
    net_salary = gross_salary + allowances - deductions;

    // Display result
    printf("Net salary = %.2f\n", net_salary);

    return 0;
}
