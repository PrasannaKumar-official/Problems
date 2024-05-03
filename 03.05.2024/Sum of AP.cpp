#include<stdio.h>
int main()
{
    int a, n, d, sum=0;
    printf("Enter a , n , d: ");
    scanf("%d %d %d", &a, &n, &d);
    for(int i = 0; i < n; i++){
        sum += a;
        a += d;
    }
    printf("%d", sum);
    return 0;
}

