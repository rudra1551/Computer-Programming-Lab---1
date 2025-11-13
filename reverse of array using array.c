#include<stdio.h>
void main(){
int i,j,a[5];
printf("enter 5 values:");
for(i=0;i<5;i++){
scanf("%d",&a[i]);
}
for(i=4;i>=0;i--){
printf("%d,",a[i]);
}
}
