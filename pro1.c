#include<stdio.h>
int search(int arr[],int n,int key)
{   int i,freq,f=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
         f=1;
         freq++;
        }
    }
    if(f==1)
    return freq;
    else
    return -1;
}
int main()
{
    int n,p;
    printf("enter size of array");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements of array");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int key;
    printf("enter the key you want to search");
    scanf("%d",&key);
    p=search(arr,n,key);
    if(p>0)
    printf("element occur %d times",p);
    else
    printf("element not found");
    return 0;
}
