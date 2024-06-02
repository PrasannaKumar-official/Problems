//Enter a string: kumar
//Reversed string: ramuk
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);

    int n = strlen(str);
    for (int i=0;i<n/2;i++) {
        char temp=str[i];
        str[i]=str[n-i-1];
        str[n-i-1]=temp;
    }
    printf("Reversed string: %s", str);
    return 0;
}

