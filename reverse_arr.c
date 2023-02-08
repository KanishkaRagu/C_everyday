#include <stdio.h>
int reverse(int arr[],int n,int start,int end)
{
    int temp;
    while(start<end)
    {
        temp = arr[start];  
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
}
int main()
{
     int arr[]= {1,2,4,5,6};
    int n=5;
  
    reverse(arr,n,0,n-1);
}