#include<stdio.h>
void bubble(int *a,int n)
{
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("\nAfter sorting array is:\n");
	for(int i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n1st Max element in array is--%d",a[n-1]);
	printf("\nMin element in array is--%d",a[0]);
	printf("\n");
}
int main()
{
	int a[20],i,n,pos;
	printf("Total number of elements: ");
	scanf("%d",&n);
	printf("Enter array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nArray is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	bubble(a,n);
}
/*OUTPUT
Total number of elements: 5
Enter array elements:7 2 4 9 1

Array is:
7	2	4	9	1	
After sorting array is:
1	2	4	7	9	
Max element in array is--9
Min element in array is--1
*/
