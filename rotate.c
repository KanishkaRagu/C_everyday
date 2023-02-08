#include <stdio.h>

int rotate_k(int arr[],int n,int d)
{
    int temp[n];
    int k=0;
    for(int i=d;i<n;i++)
    {
        temp[k]=arr[i];
        k++;
    }
    for(int i=0;i<d;i++)
    {
        temp[k]=arr[i];
        k++;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d",temp[i]);
    }
}
int main()
{
     int arr[]= {1,2,4,5,6};
    int n=5;
    int d=3;
    rotate_k(arr,n,d);
}

