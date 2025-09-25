#include<stdio.h>
int main(){
int a[10],i;
printf("enter 10 values");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
printf("the 4th value is %d \n",a[3]);
printf("the 7th value is %d \n",a[6]);
printf("the 9th value is %d \n",a[8]);
return 0;
}
