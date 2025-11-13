#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int i,a=0,e=0,ii=0,o=0,u=0;
    printf("Enter a string: ");
    gets(str);
    for(i=0; str[i]!='\0'; i++) {
        char ch = tolower(str[i]);
        if(ch=='a') a++;
        else if(ch=='e') e++;
        else if(ch=='i') ii++;
        else if(ch=='o') o++;
        else if(ch=='u') u++;
    }
    printf("a=%d e=%d i=%d o=%d u=%d", a,e,ii,o,u);
    return 0;
}
