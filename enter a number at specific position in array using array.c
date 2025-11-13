#include<stdio.h>
void main(){
int i,a[10],b[10],pos,n;

printf("Enter 9 values:");
for(i=0;i<9;i++){
scanf("%d",&a[i]);
}
printf("Enter a number:");
scanf("%d",&n);

printf("Enter Place (1-10) where you want to enter the number:");
scanf("%d",&pos);

for(i=0;i<10;i++){
b[i]=0;
}

for(i=9;i>=pos;i--){
b[i]=a[i-1];
}
for(i=0;i<pos-1;i++){
b[i]=a[i];
}

b[pos - 1]=n;
for(i=0;i<10;i++){
printf("%d,",b[i]);
}
}
