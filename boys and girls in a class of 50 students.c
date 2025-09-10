#include <stdio.h>
int main() {
    int code, boys=0, girls=0;
    printf("Enter 50 student codes (1=boy, 2=girl):\n");
    for(int i=1;i<=50;i++) {
        scanf("%d",&code);
        if(code==1) boys++;
        else if(code==2) girls++;
    }
    printf("Boys = %d, Girls = %d", boys, girls);
    return 0;
}
