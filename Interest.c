#include <stdio.h>
int main() {
    float P, R, N, I;

    printf("Enter Principal (P): ");
    scanf("%f", &P);

    printf("Enter Rate of Interest (R): ");
    scanf("%f", &R);

    printf("Enter Time in years (N): ");
    scanf("%f", &N);

    I = (P * R * N) / 100;

    printf("Simple Interest = %.2f", I);

    return 0;
}
