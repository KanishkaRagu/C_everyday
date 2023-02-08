#include <stdio.h>
int find_in_arr(int arr[],int x,int n)
{
    for(int i=0;i<(n-1);i++)
    {
        for(int j=(i+1);j<n;j++)
        {
            if(arr[i]+arr[j]==x)
            {
               
                return 1;
               
                
            }
        }
        
    }return 0;
    
}
int main()
{
   int arr[]={2,-1,1,-3};
   int n=4;
   int x;
   printf("enter element to find sum:");
   scanf("%d",&x);
   
   if (find_in_arr(arr, x, n)) {
        printf("Yes\n");
    }
    else {
        printf("No\n");
    }

    return 0;
}