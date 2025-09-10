#include <stdio.h>
int main() {
    int n, i, num, sum=0;
    float mean;
    printf("Enter n: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++) {
        scanf("%d", &num);
        sum += num;
    }
    mean = (float)sum/n;
    printf("Sum = %d, Mean = %.2f", sum, mean);
    return 0;
}
