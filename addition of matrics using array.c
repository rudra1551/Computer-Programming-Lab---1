#include<stdio.h>
void main(){
int x,y;

printf("enter no. of rows and columns:");
scanf("%d %d",&x,&y);

int i,j,a[x][y],b[x][y],c[x][y];

printf("enter values of 1st matrics:");
for(i=0;i<x;i++){
for(j=0;j<y;j++){
scanf("%d",&a[i][j]);
}}

printf("enter values of 2nd matrics:");
for(i=0;i<x;i++){
for(j=0;j<y;j++){
scanf("%d",&b[i][j]);
}}

for(i=0;i<x;i++){
for(j=0;j<y;j++){
c[i][j]=b[i][j]+a[i][j];
}}

for(i=0;i<x;i++){
printf("\n");
for(j=0;j<y;j++){
printf("%d",c[i][j]);
}}
}
