
#include<malloc.h>
#include<stdio.h>
struct node
    {
        int data;
        struct node *next;
    };
  struct node *newnode ,*current ,*start;
  
  int main()
  {
      int n,i;
      printf("\nEnter the count of values\n");
      scanf("%d",&n);
      start=NULL;
      printf("\nEnter the %d values\n",n);
      for(i=1;i<=n;i++)
      {
          newnode =(struct node *)malloc (sizeof(struct node));
          scanf("%d",&newnode->data);
          newnode->next=NULL;
          if(start==NULL)
          {
              start=newnode;
              current=newnode;
          }
          else
          {
              current->next=newnode;
              current=newnode;
          }
      }
      printf("\nThe linked list\n");
      for(current=start;current!=NULL;current=current->next)
      {
          printf("%d->",current->data);
      }
      printf("NULL");
  }