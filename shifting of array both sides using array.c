#include<stdio.h>
#include<stdlib.h>
void main(){
int i,n,dir,a[10],b[10];

printf("enter  10 values:");
for(i=0;i<10;i++){
scanf("%d",&a[i]);
}
printf("\n");
printf("enter value of positions to shift:");
scanf("%d",&n);
printf("\n");
printf("enter 1 ( for left side ) or 2 ( for right side ):");
scanf("%d",&dir);

for(i=0;i<10;i++){
b[i]=0;
}

if(dir == 1){
for(i=0;i<10-n;i++){
b[i]=a[i+n];
}}
else if(dir == 2){
for(i=9;i>=n;i--){
b[i]=a[i-n];
}}
else {
        printf("\n");
printf("entered directional value is wrong");
printf("\n");
exit (1);
}
printf("\n");
for(i=0;i<10;i++){
printf("%d,",b[i]);
printf("\n");
}
}
