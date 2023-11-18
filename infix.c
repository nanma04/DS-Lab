#include<stdio.h>
#define size 5
int s[size];
int top=0;

int isempty()
{
if(top==0)
return(1);
else
return(0);
}

int isfull()
{
if(top==size)
return(1);
else
return(0);
}

void push(int item)
{
s[top]=item;
top=top+1;
}
int pop()
{
top=top-1;
return(s[top]);
}
int peek()
{
return(s[top]-1);
}

int instackp(char c)
{
switch(c){
	case'+':
	case'-':return(2);
		break;
	case'*':
	case'/':return(4);
		break;
	case'^':return(5);
		break;
	case'(':return(0);
		break;
}
}

int inputp(char c)
{
	switch(c)
	{
	case'+':
	case'-':return(1);
		break;
	case'*':
	case'/':return(3);
		break;
	case'^':return(6);
		break;
	}
}

void main()
{
	int i=0,j=0;
	char infix[100],postfix[100],c,token;
	printf("Enter an infix exprn");
	scanf("%s",infix);
	while(infix[i]!='\0')
	{
	token=infix[i];
	switch(infix[i])
	{
		case'(':push(infix[i]);
		break;
		case'+':
		case'-':
		case'*':
		case'/':
		case'^':while(!isempty() && (instackp(peek())>inputp(token)))
				{
			postfix[j+1]=pop();
			}
			push(token);
			break;
		case')':while((c=pop())!='(')
			{
			postfix[j++]=c;break;
			}
		default:postfix[j++]=token;
	}
	i++;
	while(!(isempty()))
	{
	postfix[j++]=pop();
	postfix[j]='\0';
	printf("Postfix:%s",postfix);
	}
}
	}
	
	
