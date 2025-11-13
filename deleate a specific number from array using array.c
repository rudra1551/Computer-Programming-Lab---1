
#include<stdlib.h>
#include<stdio.h>
void main(){
int i,n,a[10],pos=-1;

printf("Enter 10 values:");
for(i=0;i<10;i++){
scanf("%d",&a[i]);
}
printf("\n");
printf("enter a number to search:");
scanf("%d",&n);

for(i=0;i<10;i++){
if(a[i]==n)
pos=i;
}

if(pos != -1){
for(i=pos;i<10;i++){
a[i]=a[i+1];
}
}
else {
        printf("\n");
printf("%d is not in Array",n);
printf("\n");
exit(1);
}
printf("\n");
printf("Updated Array is:");
for(i=0;i<10;i++){
printf("%d,",a[i]);
}
printf("\n");
}
