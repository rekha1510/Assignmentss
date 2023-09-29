#include<stdio.h>
int main()
{
int p=4800, per=250, n, amt, totalAmount, left;
printf("Enter the number of workers:");
scanf("%d",&n);
amt=per*4;
totalAmount=n*amt;
left=p-totalAmount;
printf("Amount paid to each worker=%d\n",amt);
printf("Total amount paid to all workers=%d\n",totalAmount);
printf("Total amount left with with him=%d\n",left);
}
