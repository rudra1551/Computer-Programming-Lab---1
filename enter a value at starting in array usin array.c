#include<stdio.h>
void main(){
int i,a[10],b[10],n;

printf("Enter 9 values:");
for(i=0;i<9;i++){
scanf("%d",&a[i]);
}
printf("Enter a number:");
scanf("%d",&n);

for(i=0;i<10;i++){
b[i]=0;
}

for(i=9;i>0;i--){
b[i]=a[i-1];
}
b[0]=n;
for(i=0;i<10;i++){
printf("%d,",b[i]);
}
}
