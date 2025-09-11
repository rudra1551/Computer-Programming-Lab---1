#include <stdio.h>

int main() {
    float radius;
    float area;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    area = (22.0 / 7) * radius * radius;
    printf("Area of the circle = %.2f\n", area);
