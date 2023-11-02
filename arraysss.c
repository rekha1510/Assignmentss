#include<stdio.h>
int main()
{
int n,sume=0,sumo=0;
printf("Enter the array size:");
scanf("%d",&n);
int a[n];
printf("Enter elements:");
for(int i=0;i<n;i++)
scanf("%d",&a[i]);
for(int i=0;i<n;i++)
{
 if(a[i]%2!=0)
sume=sume+a[i];

else 
sumo=sumo+a[i];
}
printf("sum is %d",sumo-sume);
return 0;
}

