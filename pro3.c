#include<stdio.h>
#include<math.h>
void jumpsearch(int arr[],int n,int key)
{
    int start=0,p=1,i;
     int end=pow(2,p++),f=0;
     while((arr[end]<=key)&&(end<n))
    {
        start=end;
        end+=pow(2,p++);
        if(end>n-1)
        end=n;
    }
    for(i=start;i<end;i++)
    {
        if(arr[i]==key)
        {
            f++;
            break;
        }
    }
    if(f==1)
    printf("%d is found at %d position in array",key,i);
    else
    printf("element not found");
}
int main()
{
    int key,n;
    printf("enter size of array");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter element you want to search");
    scanf("%d",&key);
    jumpsearch(arr,n,key);
    return 0;
}
