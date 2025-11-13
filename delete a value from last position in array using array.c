#include<stdio.h>
void main(){
int i,n,a[10];

printf("Enter 10 values:");
for(i=0;i<10;i++){
scanf("%d",&a[i]);
}
a[9]=0;
printf("\n");
printf("Updated Array is:");
for(i=0;i<10;i++){
printf("%d,",a[i]);
}
printf("\n");
}
