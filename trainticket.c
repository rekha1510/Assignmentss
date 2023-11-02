#include<stdio.h>
int main()
{
int age,time;
char seating,cencor;
scanf("%d %d %c %c", &age, &time, &seating, &cencor);
if(age>12 && cencor=='u')
   {
   char ch[100];
   scanf("%s", &ch);
   if(ch=="yes")
      printf("Ticket price is 200/-");
   else 
      printf("Normal Pricing");
   }
if(age<12 && cencor=='u')
   {
   if(time>17 && seating=='s')
    printf("Ticket price is 400/-");
   else 
    printf("Ticket price is 500/-"); 

    }
if(age>12 && cencor=='a')
{
    printf("Customer is not allowed");
}
if(age>12 && age<18 && cencor=='a')
{
    printf("Customer requires adult company \t Ticket price is 350/-");
}
if(age>=18 && cencor=='a')
{
printf("price is 600/-");
}}

