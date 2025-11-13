#include<stdio.h>
void main(){
int i,a[10],n;

printf("Enter 9 values:");
for(i=0;i<9;i++){
scanf("%d",&a[i]);
}
printf("Enter a number:");
scanf("%d",&n);

a[9]=n;
for(i=0;i<10;i++){
printf("%d,",a[i]);
}
}
