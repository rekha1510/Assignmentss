#include<stdio.h>
int main()
{
int m,n;
printf("Enter the  number of rows and columns:");
scanf("%d %d", &m, &n);
int a[m][n];
printf("Enter the array elements:");
for(int i=0;i<m;i++)
{
for(int j=0;j<n;j++)
   scanf("%d", &a[i][j]);
}
for(int i=0;i<m;i++)
{
for(int j=0;j<n;j++)
   printf("%3d", a[i][j]);
printf("\n");
}
return 0;
}

