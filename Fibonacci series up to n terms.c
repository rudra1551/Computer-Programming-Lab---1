#include <stdio.h>
int main() {
    int n, a=0, b=1, next, i;
    printf("Enter n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
    return 0;
}
