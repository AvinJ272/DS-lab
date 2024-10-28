#include<stdio.h>
void main()
{
int left=0,i;
int size,num,middle;
int list[20];
printf("enter the size");
scanf("%d",&size);
int right=size;
printf("enter the element");
for(i=0;i<size;i++)
{
scanf("%d",&list[i]);
}
printf("enter the number search");
scanf("%d",&num);
while(left<=right)
{
middle=(left+right)/2;
if(list[middle]==num)
{
printf("the element is found at postion %d",middle);
break;
}
else if(list[middle]>num)
right=middle-1;
else
left=middle+1;
}
if(left>right)
printf("element not found in the list");
}





