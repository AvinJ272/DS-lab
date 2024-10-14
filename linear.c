#include<stdio.h>
void main()
{
int a[50],i,n,s;
printf("enter the size of array");
scanf("%d",&n);
printf("enter element of array");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter the element are:\n");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
printf("enter the number to be search:\n");
scanf("%d",&s);
printf("enter the number to be search:%d",s);
for(i=0;i<n;i++)
{
if(a[i]==s)
{
printf("\n the given number position ios %d\n",i+1);
break;
}
}
if(i==n)
{
printf("\n the given number not a list");
}
}
