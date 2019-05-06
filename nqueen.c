#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int x[100],c;
int place(int k,int i)
{
 int j;
 for(j=1;j<=k-1;j++)
 { 
 if((x[j]==i))
 return 0;
 else
 if(abs(x[j]-i)==abs(j-k))
 return (0);
 }
 return (1);
}

void print(int n)
{
int i,j;
printf("\n\nSolution:%d\n\n",++c);
for(j=1;j<=n;++j)
printf("\t");
for(j=1;j<=n;++j)
{
printf("\n\n");
for(i=1;i<=n;++i) 
{
if(x[j]==i)
printf("\tQ"); 
else
printf("\t-"); 
}
}
}
void queen(int k, int n)
{
 for(int i=1;i<=n;i++)
 {
 if(place(k,i))
 {
  x[k]=i;
  if(k==n)
  print(n);
  else
  queen(k+1,n);
 }
}
}
 int main()
{
 int n;
 printf("\nEnter no. of Queens");
 scanf("%d",&n);
 queen(1,n);
}
  

