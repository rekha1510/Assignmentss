
#include<math.h>
#include<stdio.h>
void main()
{
int n,c,d,fact=0,temp;
scanf("%d", &n);
temp=n;
c=log10(n)+1;
while(n!=0)
{
int r=n%10;
fact=fact+pow(r,c);
n=n/10;
}
if(temp==fact)
printf("yes");
else printf("no");
}

