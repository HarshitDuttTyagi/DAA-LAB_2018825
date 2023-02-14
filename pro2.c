#include<stdio.h>
int binarysearch(int arr[],int start,int end,int key)
{   int i,freq;
    if(start==end)//array has only one element
    {
        if(arr[start]==key)
        {
         freq++;
         return freq;
        }
        else
        return -1;
    }
    else
    {
        int mid;
        mid=(start+end)/2;
        if(arr[mid]==key)
        {
            freq++;
        }
        else if(arr[mid]>key)
        {
            binarysearch(arr,start,mid-1,key);
            return freq;
        }
        else
        {
         binarysearch(arr,mid+1,end,key);
         return freq;
        }
    }
}
int main()
{
    int n,p=0;
    printf("enter size of array");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements of array");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int start=arr[0];
    int end=arr[n-1];
    int key;
    printf("enter the key you want to search");
    scanf("%d",&key);
    p=binarysearch(arr,start,end,key);
    if(p>0)
    printf("element occur %d times",p);
    else
    printf("element not found");
    return 0;
}
