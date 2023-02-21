#include<stdio.h>
void search(int a[],int n,int key)
{
int i,j,k,f=0;
for(i=0;i<n;i++)
	{
        for(j=0;j<n;j++)
        {
                if(a[i]-a[j]==key)
                {
                    f++;
                }
        }
	}
	if(f>0)
        printf("%d",f);
        else
        printf("no sequence found");
}
int main()
{
	int n,i,key=0;
	printf("enter the size of array\n");
	scanf("%d",&n);
	int a[n];
	printf("enter the elements\n");
	for(i=0;i<n;i++)
	{
        scanf("%d",&a[i]);
	}
	printf("enter the key");
    scanf("%d",&key);
	search(a,n,key);
	return 0;
}
