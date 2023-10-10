#include<stdio.h>
void read(int [],int);
void quicksort(int [],int,int);
void swap(int *,int *);
int partition(int [],int,int);
void print(int [],int);

void main()
{
	int n;
	printf("enter the num of elements");
	scanf("%d",&n);
	int a[n];
	read (a,n);
	quicksort(a,0,n-1);
	print(a,n);
}

void read(int a[],int n)
{
	int i;
	printf("enter the elements");
	for(i=0;i<=n;i++)
	scanf("%d",&a[i]);
}

void quicksort(int a[],int start,int end)
{
	int pos;
	if(start<end){
	pos=partition(a,start,end);
	quicksort(a,start,pos-1);
	quicksort(a,pos+1,end);
	}
}
int partition(int a[],int start,int end)
{
	int i,key,j;
	key=a[start];
	i=start+1;
	j=end;
	do{
	while(i<j && a[i]>key)
	i++;
	while(j>start && a[j]>key)
	j--;
	if(i<j)
	swap(&a[i],&a[j]);
	}
	while(i<j);
	swap(&a[start],&a[j]);
	return j;
}

void swap(int *a,int *b)
{
int t;
	t=*a;
	*a=*b;
	*b=t;
}

void print(int a[],int n){
	int i;
	printf("Sorted Array\n");
	for(i=0;i<=n;i++)
	printf("%d\t", a[i]);
	
}

