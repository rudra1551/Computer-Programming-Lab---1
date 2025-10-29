#include<stdio.h>
void main (){
int i,a,largest,smallest,num;

printf("enter number 1:");
scanf("%d",&num);
largest=smallest=num;

for(i=2;i<=100;i++){
printf("enter number %d:",i);
scanf("%d",&num);
    
if(num>largest)
largest=num;

if(num<smallest)
smallest=num;
}
    
printf("the largest number out of 100 numbers is: %d",largest);
printf("the smallest number out of 100 numbers is: %d",smallest);

}
