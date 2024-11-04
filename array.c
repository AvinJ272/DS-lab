#include<stdio.h>
void main()
{
int a[10],i,n,in,pos;
printf("enter the number");
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter the element to be inst");
scanf("%d",&pos);
for(i=n;i>=pos;i--)
{
a[i]=a[i-1];
}
a[pos-1]-in;
for(i=0;i<=n;i++)
printf("%d\n",a[i]);
}

