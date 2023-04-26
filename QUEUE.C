#include<stdio.h>
#include<conio.h>
#define max 10
typedef struct Quetype
{
int a[max];
int front,rear;
}Queue;
void main()
{
Queue Q;
int choice,item,i;
int isoverflow(Queue);
int isunderflow(Queue);
int isdelete(Queue *);
void enquene(Queue *,int);
Q.front=Q.rear=-1;
while(1)
{
  printf("1.Enquene insertion\n");
  printf("2.Deletion\n");
  printf("3.Exit\n");
  printf("Enter the choice:");
  scanf("%d",&choice);
  clrscr();
  switch(choice)
  {
    case 1:
    if(isoverflow(Q))
    {
      printf("Queue is overflow");
    }
    else
    {
      printf("Enter item you want");
      scanf("%d",&item);
      enquene(&Q,item);
    }
    break;
    case 2:
   if(isunderflow(Q))
   {
     printf("Queue have no element\n");
   }
   else
   {
    item=isdelete(&Q);
    printf("the item is deleted in the queue\n");
   }
   break;
   case 3:
   exit();
   default:
   printf("invalid choice");
  }
 }
}
int isunderflow(Queue Q)
{
  if(Q.front==-1)
  {
   return 1;
  }
  else
  {
   return 0;
  }
}
int isoverflow(Queue Q)
{
  if(Q.front==0&&Q.rear==max-1)
  {
   return 1;
  }
  else
  {
   return 0;
  }
}
void enquene(Queue *Q,int item)
{
	int i;
  if(Q->front==-1)
  {
    Q->front=0;
    Q->rear=0;
   }
   else if(Q->rear<max-1)
   {
     Q->rear=Q->rear+1;
     Q->a[Q->rear]=item;
   }
  else if(Q->front>0&&Q->rear==max-1)
  {
  for(i=Q->front;i<=Q->rear;i++)
  {
   Q->a[i-Q->front]=Q->a[i];
  }
   Q->rear=(Q->rear)-(Q->front);
   Q->front=0;
   Q->rear=Q->rear+1;
   Q->a[Q->rear]=item;
}
}
int isdelete(Queue *Q)
{
  int item;
  item=Q->a[Q->front];
  if(Q->front==Q->rear)
  {
   Q->front=Q->rear=-1;
  }
  else
  {
   Q->front=Q->front+1;
  }
  return item;
}
