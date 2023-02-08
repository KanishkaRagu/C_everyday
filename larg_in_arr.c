

#include <stdio.h>
int maj(int arr[],int n)
{
    int maj=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>maj)
        {
            maj=arr[i];
            printf("%d",arr[i]);
        }
    }
}
int main()
{
   int arr[]={2,-1,1,-3};
   int n=4;
   maj(arr,n);

    return 0;
}