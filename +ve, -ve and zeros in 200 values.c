#include <stdio.h>
int main() {
    int num, pos=0, neg=0, zero=0;
    for(int i=1;i<=200;i++) {
        scanf("%d",&num);
        if(num > 0) pos++;
        else if(num < 0) neg++;
        else zero++;
    }
    printf("Positive = %d\nNegative = %d\nZero = %d", pos, neg, zero);
    return 0;
}
