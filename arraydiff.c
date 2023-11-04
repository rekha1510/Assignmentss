#include<stdio.h>
int main()
{
int n,m,sumd=0,sump=0;
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
    for(int j=0; j<m;j++)
        {
         if(i==j) {
            sumd=sumd+a[i][j];
                  }
         if(i+j==n-1)
            sump=sump+a[i][j];
        }   
}
printf("%3d", sumd-sump);
return 0;
}
 
