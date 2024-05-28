//input
//Enter the amount: 1260
//output
//Denomination
//500 = 2
//100 = 2
//50 = 1
//10 = 1
#include<stdio.h>
int main()
{
    int amount;
    printf("Enter the amount: ");
    scanf("%d",&amount);
    
    int denominations[]={500,100,50,10};
    int count[4]={0};
    
    for(int i=0;i<4;i++){
        count[i]=amount/denominations[i];
        amount %= denominations[i];
    }
    printf("Denomination\n");
    for(int i=0;i<4;i++)
    {
        printf("%d = %d\n",denominations[i],count[i]);
    }
    
    return 0;
}
