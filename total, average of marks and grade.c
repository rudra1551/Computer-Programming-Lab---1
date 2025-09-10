#include <stdio.h>
int main() {
    int m1,m2,m3;
    float total, avg;
    printf("Enter marks of 3 subjects: ");
    scanf("%d%d%d",&m1,&m2,&m3);

    if(m1<35 || m2<35 || m3<35) {
        printf("Fail (less than 35 in a subject)");
    } else {
        total = m1+m2+m3;
        avg = total/3.0;

        printf("Total = %.2f, Average = %.2f\n", total, avg);

        if(avg>=70) printf("Distinction");
        else if(avg>=60) printf("First Class");
        else if(avg>=50) printf("Second Class");
        else if(avg>=35) printf("Third Class");
        else printf("Fail");
    }
    return 0;
}
