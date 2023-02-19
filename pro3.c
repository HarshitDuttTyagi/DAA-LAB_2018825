#include<stdio.h>
#include<math.h>
int main()
{
    int start=0,p=1,key,n,f=0,i;
    int end=pow(2,p++);
    printf("enter size of array");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements");
    for(i=0;i<n;i++)
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
    return 0;
}
