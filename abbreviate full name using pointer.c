#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int i, len;
    printf("Enter full name: ");
    gets(name);
    len = strlen(name);

    printf("Abbreviated form: ");
    printf("%c.", name[0]);

    for(i=1; i<len; i++) {
        if(name[i] == ' ' && name[i+1] != '\0') {
            if(strchr(name+i+1, ' ') != NULL)
                printf("%c.", name[i+1]);
            else
                printf(" %s", name+i+1);
        }
    }
    return 0;
}
