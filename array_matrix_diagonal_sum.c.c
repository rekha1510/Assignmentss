//sum of principle diagonal elements
#include<stdio.h>
int main()
{
int n,m,sum=0;
printf("Enter size:");
scanf("%d %d", & n, &m);
int a[n][m];
printf("Enter elements:");
for(int i=0;i<n;i++)
{
for(int j=0;j<m;j++)
scanf("%d", &a[i][j]);
}
for(int i=0;i<n;i++)
{
for(int j=0; j<m;j++) {
if(i==j) {
sum=sum+a[i][j];
}
}
}
printf("%3d", sum);
return 0;
}

