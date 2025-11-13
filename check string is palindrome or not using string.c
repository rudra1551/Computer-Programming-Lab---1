#include <stdio.h>
#include <string.h>
int main() {
    char str[100], temp[100];
    printf("Enter a string: ");
    gets(str);
    strcpy(temp, str);
    strrev(str);
    if(strcmp(str, temp) == 0)
        printf("Palindrome");
    else
        printf("Not Palindrome");
    return 0;
}
