#include<stdio.h>
int linearsearch(int [],int,int);

void main()
{
	int n,key,pos,i;
	printf("Enter the size");
	scanf("%d",&n);
	int a[n];
	printf("ENTER THE INTEGER VALUES");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	printf("Enter the key to search");
	scanf("%d",&key);
	pos=linearsearch(a,key,n);
	if(pos== -1)
	{
	printf("element not found");
	}
	else
	printf("elemnt is found");
	
}

int linearsearch(int a[],int key,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
	if(a[i]==key)
	return (i);
	}
	return(-1);

}
