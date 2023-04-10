#include<stdio.h>
#include<conio.h>
#include<alloc.h>
typedef struct lklist
{
int info;
struct lklist *next;
}node;
void main()
{
node *head=NULL;
int choice,item;
void insert_at_beg(node **,int);
void traverse(node *);
void insert_at_end(node **,int);
void delete_at_beg(node **);
while(1)
{
printf("1.insert at begining\n");
printf("2.Traverse\n");
printf("3.Insert_at_end\n");
printf("4.deleted\n");
printf("5.exit\n");
printf("enter your choice\n");
scanf("%d",&choice);
switch(choice)
{
   case 1:
   printf("enteritem");
   scanf("%d",&item);
   insert_at_beg(&head,item);
   break;
   case 2:
   if(head==NULL)
   {
   printf("list is empty");
   }
   else
   {
   traverse(head);
   }
   break;
   case 3:
   printf("enter item");
   scanf("%d",&item);
   insert_at_end(&head,item);
   break;
   case 4:
   if(head==NULL)
   {
   printf("list is empty");
   }
   else
   {
   delete_at_beg(&head);
   }
   break;

   case 5:
   exit(0);
   default:
   printf("invalid input");
}
}
}
void insert_at_beg(node **start,int item)
{
node *temp;
temp=(node*)malloc(sizeof(node));
temp->info=item;
if(*start==NULL)
{
temp->next=NULL;
}
else
{
temp->next=*start;
}
*start=temp;
}
void traverse(node *start)
{
while(start!=NULL)
{
printf("%d",start->info);
start=start->next;
}
}
void insert_at_end(node **start,int item)
{
node *temp,*loc;
temp=(node*)malloc(sizeof(node));
temp->info=item;
temp->next=NULL;
if(*start==NULL)
{
*start=temp;
}
else
{
loc = *start;
while(loc->next!=NULL)
{
loc=loc->next;
}
loc->next=temp;
}
}
void delete_at_beg(node **start)
{
node *temp;
temp = *start;
*start=(*start)->next;
free(temp);
}