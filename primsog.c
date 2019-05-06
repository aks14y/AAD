#include<stdio.h>
#include<stdbool.h>
#include<limits.h>

int main()
{
  int V,sum=0,min=INT_MAX,i,j,k,edges=0,x=0,y=0;
  int mat[10][10];
  printf("Enter size : ");
  scanf("%d",&V);
  printf("Enter elements :- \n");
  for(i=0;i<V;i++)
 	 for(j=0;j<V;j++)
 		scanf("%d",&mat[i][j]); 
  bool selected[V];
	selected[0]=true;
	for(i=1;i<V;++i) 
		selected[i]=false;
	printf("\nMinimum spanning tree :-\n");
	for(i=0;i<V-1;++i)
	{
		x=0,y=0,min=INT_MAX;
		for(j=0;j<V;++j)
		{
			if(selected[j])
			{
				for(k=0;k<V;++k)
				{
					if(!selected[k] && mat[j][k])
					{
						if(min>mat[j][k])
						{
							min=mat[j][k];
							x=j;y=k;
						}
					}
				}
			}
		}
		printf("%d -> %d : %d\n",x,y,mat[x][y]);
		sum=sum+mat[x][y];
		selected[y]=true;
		
	}
	 printf("%d",sum);
	return 0;
}
	
