#include<stdio.h>
void search(int arr[],int n)
{
    int i,ele,j,comp=0,shifts=0;
    for(i=1;i<n;i++)
    {
        ele=arr[i];
        j=i-1;
        while(j>=0&&ele<arr[j])
        {   shifts++;
            comp++;
            arr[j+1]=arr[j];
            j--;
        }
        shifts++;
        arr[j+1]=ele;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\ncomparisons = %d",comp);
    printf("\nshifts = %d",shifts);
}
int main()
{
    int n;
    printf("enter size of array");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    search(arr,n);
    return 0;
}