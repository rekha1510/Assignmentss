//calculate the sum of even numbers in the given array
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
 if(a[i]%2==0)
sum=sum+a[i];
}
printf("sum is %d",sum);
return 0;
}
