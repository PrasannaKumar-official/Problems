#include<stdio.h>
int main(){
    int n, sum = 0;
    printf("Enter the range: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        sum += i * i;
    }
    printf("Sum of N square numbers are: %d", sum);
    return 0;
}

