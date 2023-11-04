#include<stdio.h>
int arrsum(int,int[]);
int arrsum(int size, int a[])
{
int sum=0;
for(int i=0;i<size;i++)
sum+=a[i];
return sum;
}
int main()
{
int size;
printf("Enter your array size:");
scanf("%d",&size);
int a[size];
printf("Enter your elements:");
for(int i=0;i<size;i++){
printf("a[%d]",i);
scanf("%d",&a[i]);
}
int sum=arrsum(size,a);
printf("%d",sum);
return 0;
}
