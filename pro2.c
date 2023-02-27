#include<stdio.h>
void sort(int arr[],int n)
{
    int i,j,temp,ele,pos,comp=0,swap=0;
    for(i=0;i<n-1;i++)
    {
        ele=arr[i];pos=i;
        for(j=i+1;j<n;j++)
        {
            comp++;
            if(arr[j]<ele)
            {
                ele=arr[j];
                pos=j;
            }
        }
        swap++;
        temp=arr[i];
        arr[i]=arr[pos];
        arr[pos]=temp;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\ncomparisons = %d ",comp);
    printf("\nswaps = %d ",swap);
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
    sort(arr,n);
    return 0;
}
