//replacing positive numbers with 1 and negative numbers with 0
#include<stdio.h>
int main()
{
int n;
printf("Enter the array size:");
scanf("%d",&n);
int a[n];
printf("Enter elements:");
for(int i=0;i<n;i++)
scanf("%d",&a[i]);
for(int i=0;i<n;i++)
{
 if(a[i]>0)
a[i]=1;
else
a[i]=0;
}
for(int i=0;i<n;i++)
printf("%d",a[i]);
return 0;
}
