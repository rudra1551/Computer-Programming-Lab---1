#include<stdio.h>
void main(){

int i,j,a[5],b[10];

printf("enetr 5 values:");
for(i=0;i<5;i++){
scanf("%d",&a[i]);
}
for(i=0;i<10;i++){
    b[i]=0;
}
for(i=0;i<5;i++){
b[2*i]=a[i];
}
for(i=0;i<10;i++){
printf("\n");
printf("%d",b[i]);
}
}
