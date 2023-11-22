//printing the main diagonal elements of the matrix
#include<stdio.h>
int main()
{
int n,m;
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
if(i==j)
printf("%3d", a[i][j]);
}
printf("\n");
}
return 0;
}

