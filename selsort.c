#include<stdio.h>
void readnum(int[],int);
void selsortnum(int[],int);
void printnum(int[],int);
void swap(int*,int*);

void main()
{
	int n;
	printf("enter the limit");
	scanf("%d",&n);
	int a[n];
	readnum(a,n);
	selsortnum(a,n);
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

void selsortnum(int x[],int n)
{
	int i,j,l,ind;
	for(i=0;i<n-1;i++)
	{
		l=x[0];
		ind=0;
		for(j=0;j<n-i-1;j++)
			{
				if(x[j]>l)
				{
				l=x[j];
				ind=j;
				}
			}
		swap(&x[ind],&x[n-i-1]);
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



