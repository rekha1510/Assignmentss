#include<stdio.h>
void displaysize(int size,int a[])
{
for(int i=0;i<size;i++)
printf("%d\n",a[i]);
}
int main()
{
int n;
printf("Enter the array size:");
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++)
scanf("%d",a[i]);
displaysize(a);
return 0;
}
