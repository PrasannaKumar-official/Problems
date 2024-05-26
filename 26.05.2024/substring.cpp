//input
//Enter a string: kumar
//output
// k
// k u
// k u m
// k u m a
// k u m a r
// u
// u m
// u m a
// u m a r
// m
// m a
// m a r
// a
// a r
// r

#include <stdio.h>
#include <ctype.h> 
#include<string.h>
int main() {
    char str[100];
    int len;  

    printf("Enter a string: ");
    fgets(str,100,stdin); 
    len=strlen(str);
    
    if (str[len-1] == '\n') {
        str[len-1] = '\0';
        len--;
    }
    
 	for (int i=0;i<len;i++) {
        for (int j=i; j<len;j++) {
            printf(" ");
            for (int k=i;k<=j;k++) {
                printf("%c ",str[k]);
            }
            printf("\n");
        }
    }
    return 0;
    
}
