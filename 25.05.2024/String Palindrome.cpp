#include <stdio.h>
#include <ctype.h> 
#include<string.h>
int main() {
    char str[100];
    int i,len,flag = 1;  

    printf("Enter a string: ");
    fgets(str, 100, stdin); 
    len = strlen(str);
    if (str[len-1] == '\n') {
        str[len-1] = '\0';
    }

    len = strlen(str);

    for (i = 0; i < len; i++) {
        str[i] = tolower(str[i]); 
    }

    for (i = 0; i < len / 2; i++) {
        if (!isalnum(str[i]) && !isalnum(str[len-1-i])) {
            continue;
        } else if (str[i]!=str[len-1-i]) {
           	flag=0;
            break;
        }
    }

    if (flag) {
        printf("%s is a palindrome.\n", str);
    } else {
        printf("%s is not a palindrome.", str);
    }
	return 0;
}

