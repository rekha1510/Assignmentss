
#include<math.h>
#include<stdio.h>
int arrsum(int,int[]);
int arrsum(int size,int a[])
{
int sum=0;
for(int i=0;i<size;i++)
{
if(a[i]>0)
   a[i]=a[i]*1;
else 
   a[i]=a[i]*-1;
sum=sum+a[i];
}
return sum;
}
int main()
{
int size;
printf("Enter size");
scanf("%d",&size);
int a[size];
for(int i=0;i<size;i++)
scanf("%d",&a[i]);
int sum=arrsum(size,a);
printf("sum=%d",sum);
return 0;
}
