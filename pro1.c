#include <stdio.h>
int firstocc(int a[],int n,int ele)
{
    int b=0,e=n-1,mid,f=-1;
    while(b<=e)
    {
        mid=(b+e)/2;
        if((mid==0||a[mid-1]<ele)&&a[mid]==ele)
        {f=mid; break;}
        else if(ele >a[mid])b=mid+1;
        else
            e=mid-1;

    }
    return f;
}
int lastocc(int a[],int n,int ele)
{
    int b=0,e=n-1,mid,l=-1;
    while(b<=e)
    {
        mid=(b+e)/2;
        if((mid==n-1||a[mid+1]>ele)&&a[mid]==ele)
        {l=mid; break;}
        else if(ele <a[mid])e=mid-1;
        else
            b=mid+1;
    }
    return l;
}

int main()
{
    int n;
    printf("enter size of array");
    scanf("%d",&n);
    int a[n];
    printf("enter elements");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int key;
    printf("enter element you want to search");
    scanf("%d",&key);
    int f=firstocc(a,n,key);
    int l=lastocc(a,n,key);
    if(f==-1&&l==-1) printf("ele not found");
    else
    {
        int count=(l-f)+1;
        printf("ele found %d",count);
    }
    return 0;
}
