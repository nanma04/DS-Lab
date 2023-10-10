#include<stdio.h>
void insertionsort(int[],int);
void printArray(int[],int);
void main()
{
	int n,i;
	printf("enter the limit");
	scanf("%d",&n);
	int a[n];
	printf("Enter the integers");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	insertionsort(a,n);
	printArray(a,n);

}

void insertionsort(int a[],int n)
{
	int i,j,key;
	for(i=1;i<n;i++)
	{
		key=a[i];
		j=i-1;
		while(j>=0&&a[j]>key)
		{
		a[j+1]=a[j];
		j--;
		}
		a[j+1]=key;
	}
}

void printArray(int a[],int n)
{
	int i;
	printf("Sorted Array");
	for(i=0;i<n;i++){
	printf("%d\n",a[i]);
	}
}
