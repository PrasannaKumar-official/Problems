#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int vowel_count = 0;
	printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);

    for (int i=0;str[i] !='\0';i++) {
        if (isalpha(str[i])) {
            char low_char = tolower(str[i]);
            if (low_char=='a'||low_char=='e'||low_char == 'i'||low_char == 'o'||low_char == 'u') {
                vowel_count++;
            }
        }
    }
	printf("Number of vowels: %d\n", vowel_count);
    return 0;
}

