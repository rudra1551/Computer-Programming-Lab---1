#include <stdio.h>

int main() {
    float sub1, sub2, sub3, total, average;
    scanf("%f %f %f", &sub1, &sub2, &sub3);
    total = sub1 + sub2 + sub3;
    average = total / 3;
    printf("Total = %.2f\n", total);
    printf("Average = %.2f\n", average);
    return 0;
}
