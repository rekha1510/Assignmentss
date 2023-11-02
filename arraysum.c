#include<stdio.h>
int main()
{
int n,sum=0;
printf("Enter the array size:");
scanf("%d",&n);
int a[n];
printf("Enter elements:");
for(int i=0;i<n;i++)
scanf("%d",&a[i]);
for(int i=0;i<n;i++)
{
sum=sum+a[i];
}
printf("sum is %d",sum);
return 0;
}
