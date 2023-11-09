#include<stdio.h>
#include<stdlib.h>
#define size 5
int Q[size];
int f=-1;
int R=-1;
void insertQ(int);
int deleteQ();
void display();
int isEmpty();
int isFull();
void main()
{
int chara ,item;
do
{
printf("Option LIst\n");
printf("1.InsertQ\n2.DeleteQ\n3.Display\n4.Exit\n");
printf("Enter your choice");
scanf("%d",&chara);
int l;
	switch(chara)
	{
		case 1:
		
			if(isFull())
			{
			printf("Q is full");
			}
			else
			{
			printf("Enter element to be inserted");
			scanf("%d",&l);
			insertQ(l);
			}
		break;
		case 2:
			if(isFull())
			{
			printf("Full");
			}
			else
			{
			int c=deleteQ();
			printf("Delted item is :%d",c);
			}
		break;
		case 3:display();
			break;
		case 4:exit(0);
		default:printf("Wrong Choice\n");
	}
}
while(1);
}


int isEmpty()
{
	if(f==-1)
	return(1);
	else
	return(0);
}

int isFull()
{
	if (f==(R+1)%size)
	return (1);
	else
	return(0);
}

void insertQ(int item)
{
	if (isEmpty())
	{
	f=0;
	R=0;
	Q[R]=item;
	}
	else
	{
	R=(R+1)%size;
	Q[R]=item;
	}
}

int deleteQ()
{
	int item;;
	item=Q[f];
	if(f==R)
	{
	f=-1;
	R=-1;
	}
	else
	{
	f=(f+1)%size;
	return(item);
	}
}

void display()
{
	int i;
	for(i=f;i<=R;i++)
	printf("%d\n",Q[i]);
}


