#include <stdio.h>

int main() {
    float base, height, area;

    // Input base and height
    printf("Enter the base of the triangle: ");
    scanf("%f", &base);
    printf("Enter the height of the triangle: ");
    scanf("%f", &height);

    // Calculate area using A = (L * H) / 2
    area = (base * height) / 2;

    // Display result
    printf("Area of the triangle = %.2f\n", area);

    return 0;
}
