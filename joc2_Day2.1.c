

#include<stdio.h>

void accept(int *a, int n)
{
	printf("Enter the values: ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}

int main()
{
	int a[50],n,lar1,lar2,temp,i,j;
	printf("Enter the number of balloons: ");
	scanf("%d",&n);
	accept(a,n);
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}
	}
	printf("The largest are: %d and %d",a[n-1],a[n-2]);
	return 0;
}
