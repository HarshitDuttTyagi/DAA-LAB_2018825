#include<stdio.h>
void search(int a[],int n)
{
int i,j,k,f=0;
for(i=0;i<n;i++)
	{
        for(j=i+1;j<n;j++)
        {
            for(k=0;k<n;k++)
            {
                if(a[i]+a[j]==a[k])
                {
                    f=1;
                    printf("%d,%d,%d\n",i+1,j+1,k+1);
                }
            }
        }
	}
	if(f==0)
        printf("no sequence found");
}
int main()
{
	int n,i;
	printf("enter the size of array\n");
	scanf("%d",&n);
	int a[n];
	printf("enter the elements\n");
	for(i=0;i<n;i++)
	{
        scanf("%d",&a[i]);
	}
	search(a,n);
	return 0;
}
