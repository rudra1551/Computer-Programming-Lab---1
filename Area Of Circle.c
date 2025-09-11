#include <stdio.h>

int main() {
    float radius;
    float area;

    // Input radius
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate area using A = (22/7) * R * R
    area = (22.0 / 7) * radius * radius;

    // Display result
    printf("Area of the circle = %.2f\n", area);
