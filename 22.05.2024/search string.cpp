#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char search;
    int found = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    int len = strlen(str);
    if (len>0 && str[len-1] == '\n') {
        str[len-1]='\0';
    }

    printf("Enter a character to search: ");
    scanf("%c",&search);

    for (int i=0;str[i]!='\0';i++) {
        if (str[i] == search) {
            found=1;
            break;
        }
    }
	if(found) {
        printf("Character '%c' is present in the string.\n", search);
    } 
	else {
        printf("Character '%c' is not present in the string.\n", search);
    }

    return 0;
}

