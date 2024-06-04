//input
//Enter the first string: listen
//Enter the second string: silent
//output
//The strings are anagrams
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compare(const void*a, const void*b) {
    return (*(char*)a-*(char*)b);
}
int areAnagrams(char*str1, char*str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    if (len1 != len2) {
        return 0;
    }
    qsort(str1,len1,sizeof(char),compare);
    qsort(str2,len2,sizeof(char),compare);
    for (int i = 0;i<len1;i++) {
        if (str1[i] != str2[i]) {
            return 0;
        }
    }
    return 1;
}
int main() {
    char str1[100], str2[100];
    printf("Enter the first string: ");
    scanf("%s",str1);
    printf("Enter the second string: ");
    scanf("%s",str2);
    if (areAnagrams(str1, str2)) {
        printf("The strings are anagrams");
    } else {
        printf("The strings are not anagrams");
    }
    return 0;
}

