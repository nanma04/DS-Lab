#include<stdio.h>
int binarysearch(int [],int ,int, int);

void main()
{
int n,pos,i,ele,mid;
int  top=0;

	printf("Enter the size");
	scanf("%d",&n);
	int a[n];
	int bot=n-1;
	printf("ENTER THE INTEGER VALUES");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	printf("Enter the key to search");
	scanf("%d",&ele);
	pos=binarysearch(a,top,bot,ele);
	if(pos==-1)
	{
	printf("element not found");
	}
	else
	printf("elemnt is found");

}

int binarysearch(int a[],int top,int bot,int ele)
{
int mid;
if(top<=bot)
{
mid=(top+bot)/2;
if(a[mid]==ele)
return(mid);
else
{

	if(a[mid]>ele)
	return binarysearch(a,top,mid-1,ele);
	else 
	return binarysearch(a,mid+1,bot,ele);
		}
		}
		
else
return (-1);
}

