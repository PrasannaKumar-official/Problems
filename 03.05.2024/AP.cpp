#include<stdio.h>
int main()
{
    int a, n, d;
    printf("Enter a , n , d: ");
    scanf("%d %d %d", &a, &n, &d);
    for(int i = 0; i < n; i++){
        printf("%d ", a);
        a += d;
    }
    return 0;
}

