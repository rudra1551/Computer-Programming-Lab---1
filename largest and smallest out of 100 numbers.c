#include <stdio.h>
int main() {
    int num, largest, smallest, i;
    printf("Enter 100 numbers:\n");
    scanf("%d", &num);
    largest = smallest = num;
    for(i=2;i<=100;i++) {
        scanf("%d", &num);
        if(num > largest) largest = num;
        if(num < smallest) smallest = num;
    }
    printf("Largest = %d, Smallest = %d", largest, smallest);
    return 0;
}
