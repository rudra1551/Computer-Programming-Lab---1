#include<stdio.h>
void main(){
int i,count,a[]={500,200,100,50,20,10,5,2,1},n,c[9];

printf("enter a number:");
scanf("%d",&n);
    for(i=0;i<9;i++){
c[i]=0;
}
i=0;
while(n>0){
if(n>=a[i]){
n=n-a[i];
c[i]=c[i]+1;
}
else i=i+1;
}
for(i=0;i<9;i++){
printf("no. of %d notes is: %d \n",a[i],c[i]);
}}
