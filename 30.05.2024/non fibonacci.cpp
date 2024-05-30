#include<stdio.h>

int fib(int n){
    int a=0,b=1,c;
    while(a<=n){
        if(a==n){
            return 1;
        }
        c=a+b;
        a=b;
        b=c;
    }
    return 0;
}

int main()
{
    int range;
    printf("Enter the range: ");
    scanf("%d",&range);
    
    printf("Non-fibonacci Numbers are: ");
    for(int i=1;i<=range;i++){
        if(!fib(i)){
            printf("%d ",i);
        }
    }
    
    return 0;
}
