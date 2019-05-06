#include<stdio.h>
void main()
 {
  int n,i,j,k;
  int cost[10][10],a[10][10];
  printf("enter the no of vertices");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
   {
    for(j=1;j<=n;j++)
     {
      scanf("%d",&cost[i][j]);
      a[i][j]=cost[i][j];
     }
   }
  for(k=1;k<=n;k++)
   {
    for(i=1;i<=n;i++)
     {
      for(j=1;j<=n;j++)
       {
        if(a[i][j]>(a[i][k]+a[k][j]))
         {
          a[i][j]=a[i][k]+a[k][j];
         }
       }
     }
   }
printf("\n");
printf("all pairs shortest path is \n");
  for(i=1;i<=n;i++)
   {
    for(j=1;j<=n;j++)
     {
if(a[i][j]>=60)
 {
  printf("I ");
      }
else
{
printf("%d ",a[i][j]);
   }  }
printf("\n");
   }
 }


