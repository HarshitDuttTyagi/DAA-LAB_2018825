#include<stdio.h>
int partition(int a[],int low,int high)
{
int i=low-1;int pivot=a[high],temp=0;
for(int j=0;j<high-1;j++)
{
if(a[j]<pivot)
{
i++;
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
temp=a[i+1];
a[i+1]=a[high];
a[high]=temp;
}
void quicksort(int a[],int low,int high)
{
int p=0;
if(low<high)
{
p=partition(a,low,high);
quicksort(a,low,p-1);
quicksort(a,p-1,high);
}
}
int main()
{
int n,low=0;
printf("enter size of array");
scanf("%d",&n);
int a[n],high=n-1;
printf("enter elements of array");
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
quicksort(a,low,high);
for(int i=0;i<n;i++)
{
printf("%d",a[i]);
}
return 0;
}
