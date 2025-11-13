#include<stdio.h>
#include<stdlib.h>
void main(){

int r1,c1,r2,c2;

printf("enter no. of rows and columns of matrics 1:");
scanf("%d %d",&r1,&c1);
 printf("\n");
printf("enter no. of rows and columns of matrics 2:");
scanf("%d %d",&r2,&c2);
 printf("\n");

if(c1 != r2){
printf("the multiplication of matrices with given order is not possible");
 printf("\n");
exit(1);}
int i,j,k,a[r1][c1],b[r2][c2],c[r1][c2];

printf("enter values of matrics 1:");
for(i=0;i<r1;i++){
for(j=0;j<c1;j++){
scanf("%d",&a[i][j]);
}}
 printf("\n");
printf("enter values of matrics 2:");
for(i=0;i<r2;i++){
for(j=0;j<c2;j++){
scanf("%d",&b[i][j]);
}}

for(i=0;i<r1;i++){
for(j=0;j<c2;j++){
        c[i][j]=0;
for(k=0;k<c1;k++){
c[i][j]+=a[i][k]*b[k][j];
}}}

 printf("\n");
printf("resultant matrics is:");
for(i=0;i<r1;i++){
        printf("\n");
for(j=0;j<c2;j++){
printf("%d",c[i][j]);
}}
 printf("\n");
}
