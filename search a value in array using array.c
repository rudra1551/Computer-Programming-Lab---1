#include<stdio.h>
#include<stdlib.h>
void main(){
int i,a[10],n,found=0;

printf("Enter 10 values:");
for(i=0;i<10;i++){
scanf("%d",&a[i]);
}
printf("\n");
printf("Enter value to Search:");
scanf("%d",&n);

printf("\n");
for(i=0;i<10;i++){
if(a[i]==n){
printf("value found at position: %d \n",i+1);
found=1;
}}
if(found==0)
printf("Entered Value ( %d ) is not Found",n);
printf("\n");
}
