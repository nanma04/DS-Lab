#include<stdio.h>
void readnum(int[],int);
void bsortnum(int[],int);
void printnum(int[],int);
void swap(int*,int*);

void main()
{
	int n;
	printf("enter the limit");
	scanf("%d",&n);
	int a[n];
	readnum(a,n);
	bsortnum(a,n);
	printnum(a,n);
}

void readnum(int x[],int a)
{
	int i;
	for(i=0;i<a;i++)
	{
	printf("enter the elements");
	scanf("%d",&x[i]);
	}
}

void bsortnum(int x[],int a)
{
	int i,j,noexchange,n;
	for(i=0;i<n-1;i++)
	{
		noexchange=1;
		for(j=0;j<n-i-1;j++)
		{
			if(x[j]>x[j+1])
			{
			swap(&x[j],&x[j+1]);
			noexchange=0;
			}
			if(noexchange==1)
			return;
		}
	}

}


void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

void printnum(int x[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
	printf("\n%d",x[i]);
	}
}



