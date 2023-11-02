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
printf("%d\n",a[i]);
return 0;
}
