#include <stdio.h>
int main() {
    double bytes, kb, mb, gb;

    printf("Enter size in bytes: ");
    scanf("%lf", &bytes);

    kb = bytes / 1024;
    mb = bytes / (1024 * 1024);
    gb = bytes / (1024 * 1024 * 1024);

    printf("%.2lf Bytes = %.2lf KB\n", bytes, kb);
    printf("%.2lf Bytes = %.2lf MB\n", bytes, mb);
    printf("%.2lf Bytes = %.2lf GB\n", bytes, gb);

    return 0;
}
