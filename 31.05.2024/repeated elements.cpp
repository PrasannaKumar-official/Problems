#include<stdio.h> 
int main() 
{ 
  int i,n;
  printf("Enter the number of elements: ");
  scanf("%d",&n);
  int arr[n];
  printf("Enter the elements: ");
  for(i=0;i<n;i++)
  scanf("%d",&arr[i]);
  
  printf("the repeated elements are: ");
  for(i=0;i<n;i++) 
    for(int j=i+1;j<n;j++) 
      if(arr[i] == arr[j]) 
        printf("%d ", arr[i]); 

} 
