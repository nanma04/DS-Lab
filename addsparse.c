#include<stdio.h>
void sparse(int [10][10],int,int,int [20][3]);
void addsparse(int [20][3],int [20][3]);
void printsparse(int [20][3],int);

void main()
{
	int i,j,a[10][10],r,c,r1,c1,b[10][10],t[20][3],s[20][3];
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
	
	printf("Enter row and coloumn size:");
	scanf("%d%d",&r1,&c1);
	printf("Enter the matrix:");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
		printf("%d\t",b[i][j]);
		}
		printf("\n");
		}

	sparse(b,r1,c1,t);
	addsparse(s,t); 

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

void addsparse(int s[20][3],int t[20][3],int r,int c)
{
	int m,n,i,j,k,a[20][3];
	
		a[0][0]=r;
		a[0][1]=c;
		m=1;
		n=1;
		k=1;
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				if(s[m][0] == i && s[m][1] ==j && t[n][0]==i && t[n][1]==j)
					{
					a[k][0]=s[m][0];
					a[k][1]=s[m][1];
					a[k][2]=s[m][2]+t[n][2];
					m++;
					n++;
					k++;
					}
				else if(s[m][0]==i && s[m][1]==j)
					{
					a[k][0]=s[m][0];
					a[k][1]=s[m][1];
					a[k][2]=s[m][2];
					m++;
					k++;
					}
				else if(t[n][0]==i && t[n][1]==j)
					{
					a[k][0]=t[n][0];
					a[k][1]=t[n][1];
					a[k][2]=t[n][2];
					n++;
					k++;
					}
			}
		}
	

		a[0][2]=k-1;
		printf("Sum:\n");
		for(i=0;i<a[0][2];i++)
		{
		for(j=0;j<3;j++)
		{
		printf("%d\t",a[i][j]);
		}
		printf("\n");
		}
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
