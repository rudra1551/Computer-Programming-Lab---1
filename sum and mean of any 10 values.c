#include <stdio.h>
int main() {
    int i, num, sum=0;
    float mean;
    printf("Enter 10 numbers:\n");
    for(i=1;i<=10;i++) {
        scanf("%d",&num);
        sum += num;
    }
    mean = sum/10.0;
    printf("Sum = %d\nMean = %.2f", sum, mean);
    return 0;
}
