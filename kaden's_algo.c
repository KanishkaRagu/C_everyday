//Kaden's algorithm
#include <stdio.h>
int maxsubarr(int arr[],int n)
{
    int max_sum=0,curr_sum=0;
    for(int i=0;i<n;i++)
    {
        curr_sum+=arr[i];
        if (curr_sum>max_sum)
        {
            max_sum=curr_sum;
        }
        if(curr_sum<0)
        {
            curr_sum=0;
        }
        
        
    }return max_sum;
}
int main()
{
    int arr[]= {5,-4,-2,6,1};
    int n=5;
    printf("%d",maxsubarr(arr,n));
   
}
