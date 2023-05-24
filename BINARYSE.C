#include<stdio.h>
#include<conio.h>
void main()
{
int arr[50],i,size,result;
int binary_search(int [],int);
clrscr();
printf("Enter the size of array");
scanf("%d",&size);
printf("Enter the element of array");
for(i=0;i<size;i++)
{
scanf("%d",&arr[i]);
}
result=binary_search(arr,size);
if(result==-1)
{
printf("Search item is not found");
}
else
{
printf("search item is found at position %d",result+1);
}
getch();
}
int binary_search(int arr[],int size)
{
int begin,end,mid,item;
printf("Enter the search item");
scanf("%d",&item);
begin=0;
end=size-1;
mid=(begin+end)/2;
while((begin<=end)&&(arr[mid]!=item))
{
if(item<arr[mid])
{
end=mid-1;
}
else
{
begin=mid+1;
}
mid=(begin+end)/2;
}
if(begin>end)
{
return -1;
}
else
{
return mid;
}

}



