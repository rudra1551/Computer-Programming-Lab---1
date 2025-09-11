#include <stdio.h>
int main() {
    float L, area, perimeter;

    printf("Enter length of square (L): ");
    scanf("%f", &L);

    area = L * L;
    perimeter = 4 * L;

    printf("Area = %.2f\n", area);
    printf("Perimeter = %.2f", perimeter);

    return 0;
}
