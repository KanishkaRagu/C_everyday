#include <stdio.h>


int main()
{
   int arr[6];
   int n;
   n=6;
   for(int i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);
   }
   for(int i=0;i<n;i++)
   {
       int j;
       for(j=i+1;j<n;j++)
       {
            if (arr[i] <=arr[j])
            {
                break;
            
            }
         
       }
       if(j==n)
            {
                printf("%d",arr[i]);
            }
           
   }
   
   
   
}/*
 if(arr[j]==arr[-1])
               {
                    printf("%d",arr[i]);
                    printf(" ");
               }*/