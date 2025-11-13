#include<stdio.h>
void main(){
int i,j,a[10],freq[10],count;

printf("Enter 10 values:");
for(i=0;i<10;i++){
scanf("%d",&a[i]);
freq[i]=-1;
}

printf("\n");
for(i=0;i<10;i++){
    count=1;
for(j=i+1;j<10;j++){
if(a[i]==a[j]){
count++;
freq[j]=0;
}}

if(freq[i]!=0)
 printf("frequency of value %d is: %d \n \n",a[i],count);
}
}
