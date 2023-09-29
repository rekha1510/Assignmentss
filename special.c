#include<stdio.h>
int main()
{
int n,x,a,b,c,d;
printf("Enter the special number:");
scanf("%d",&n);
a=n%10;
b=n/10;
c=a+b;
d=a*b;
x=c+d;
if(x==n)
{
printf("Yes it's your magical number");
}
else 
{
printf("not a magical number");
}
}
