#include<stdio.h>
void sparse(int [10][10],int,int,int [20][3]);
void printsparse(int [20][3],int);

void main()
{
	int i,j,a[10][10],r,c,s[20][3];
	printf("Enter row and coloumn size:");
	scanf("%d%d",&r,&c);
	printf("Enter the matrix:");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		scanf("%d",&a[i][j]);
		}
	}

	printf("Matrix  is: \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		printf("%d\t",a[i][j]);
		}
		printf("\n");
	}

	sparse(a,r,c,s);
	
}




void sparse(int a[10][10],int r,int c,int s[20][3])
{
	int i,j,k=1;
	s[0][0]=r;
	s[0][1]=c;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(a[i][j]!=0)
			{
				s[k][0]=i;
				s[k][1]=j;
				s[k][2]=a[i][j];
				k++;

			}
		}
}
	s[0][2]=k-1;
	printsparse(s,k);
}
void printsparse(int s[20][3],int k)
{
	printf("The sparse is :\n");
	for(int i=0;i<k;i++)
	{
		for(int j=0;j<3;j++)
		{
		printf("%d\t",s[i][j]);
		}
		printf("\n");
	}
}
