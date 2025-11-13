#include <stdio.h>

int main() {
    int a[10][10], b[10][10], add[10][10], sub[10][10], mul[10][10];
    int *p, *q, *r;
    int i, j, k, n;

    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    printf("Enter elements of first matrix:\n");
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            scanf("%d", &a[i][j]);

    printf("Enter elements of second matrix:\n");
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            scanf("%d", &b[i][j]
