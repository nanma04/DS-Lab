#include<stdio.h>
void read(int [],int);
void simplemerge(int[],int,int,int);
void mergesort(int[],int,int);
void print(int[],int);

void main()
{
int n,a[20];
printf("Enter number of elements");
scanf("%d",&n);

read(a,n);
mergesort(a,0,n-1);
print(a,n);
}


void read(int x[],int a)
{
	int i;
	for(i=0;i<a;i++)
	{
	printf("enter the elements");
	scanf("%d",&x[i]);
	}
}

void mergesort( int x[],int beg,int end)
{
int mid;
if(beg<end)
{ mid=(beg+end)/2;
mergesort(x,beg,mid);
mergesort(x,mid+1,end);
simplemerge(x,beg,mid+1,end);
}
}


void simplemerge(int x[],int l,int m,int h)
{
	int i=l,j=m,k=0;
	int temp[50];
	while(i<m && j<=h)
	{
	if(x[i]<x[j])
	temp[k++]=x[i++];
	else
	temp[k++]=x[j++];
	}
	while(i<m)
	{
	temp[k++]=x[i++];
	while(j<=h)
	temp[k++]=x[j++];
	for(i=l,k=0;k<=h; )
	{
	x[i++]=temp[k++];
	}
	}
}
void print(int x[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
	printf("\n%d",x[i]);
	}
}
