#include <stdio.h>
int nos_odd(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int count=0;
      for(int j=0;j<n;j++)
      {
          if(arr[i]==arr[j])
          {
              count++;
              
          }
      }
      if(count%2!=0)
      {
          return arr[i];
      }
      
       
    }
}
int main()
{
      int arr[]= {1, 2, 3, 2, 3, 1, 3};
   int n=7;
   printf("%d",nos_odd(arr,n));

    return 0;
}