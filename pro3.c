#include<stdio.h>
#include<math.h>
int main()
{
    int start=0,p=1,key,n;
    int end=pow(2,p++);
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
    while((arr[end]<=key)&&(end<n))
    {
        start=end;
        end+=pow(2,p++);
        if(end>n-1)
        end=n;
    }
    for(int i=start;i<end;i++)
    {
        if(arr[i]==key)
        {
            printf("%d is found at %d position in array",key,i);
            break;
        }
        return 0;
    }
}