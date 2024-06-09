//input
//Enter a string: The five boxing wizards jump quickly
//output
//The string is a pangram
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[1000];
    bool letters[26] = {false};
    int index;
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    
    for (int i=0;str[i]!='\0';i++) {
        if (isalpha(str[i])) {
            index=tolower(str[i])-'a';
            letters[index] = true;
        }
    }
    for (int i=0;i<26;i++) {
        if (!letters[i]) {
            printf("The string is not a pangram");
            return 0;
        }
    }
    
    printf("The string is a pangram");
    return 0;
}

