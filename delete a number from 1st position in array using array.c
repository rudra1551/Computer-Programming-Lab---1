#include<stdio.h>
void main(){
int i,n,a[10],b[10];

printf("Enter 10 values:");
for(i=0;i<10;i++){
scanf("%d",&a[i]);
}

for(i=0;i<10;i++){
b[i]=0;
}

for(i=0;i<10;i++){
b[i]=a[i+1];
}
printf("\n");
printf("Updated Array is:");
for(i=0;i<10;i++){
printf("%d,",b[i]);
}
printf("\n");
}
