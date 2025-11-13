#include<stdio.h>
#include<math.h>

float a,b;

void main(){

printf("enter a value:");
scanf("%f",&a);

printf("enter a value:");
scanf("%f",&b);

printf("the value of %.2f raised to %.2f is: %.2f",a,b,pow(a,b));
}




