#include<stdio.h>
int linear(int arr[],int n,int key)
{
int i;
for(i==0;i<n;i++)
{
if(arr[i]==key)
{
return i;
}
}
return -1;
}

int main()
{

int arr[]={1,2,3,4,10,40};
int n = sizeof(arr);
int key=10;
int index=linear(arr,n,key);

if(index==-1)
{
printf("value not found");
}
else
{
printf("value found at index %d",index);
}
return 0;
}


