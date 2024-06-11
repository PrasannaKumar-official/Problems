//input
//Enter the string: abca
//output
//true
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isPalindrome(char *s, int start, int end) {
    while (start < end) {
        if (s[start] != s[end]) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int main() {
    char s[500];
    printf("Enter the string: ");
    scanf("%s", s);

    int left = 0;
    int right = strlen(s)-1;
    bool canBePalindrome = true;
    while (left<right) {
        if (s[left]!=s[right]) {
            canBePalindrome=isPalindrome(s,left+1,right) || isPalindrome(s,left,right-1);
            break;
        }
        left++;
        right--;
    }
    if (canBePalindrome) {
        printf("true\n");
    } else {
        printf("false\n");
    }
    return 0;
}

