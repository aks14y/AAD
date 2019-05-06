#include<stdio.h>
int i,j,n,mat[20][20],visited[20],result[20],a,k=0;
void dfs(int);
int main()
{

	printf("Enter the no of vertices : ");
	scanf("%d",&n);
	printf("Enter the adjacency matrix : ");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&mat[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		visited[i]=0;
	}
	for(i=0;i<n;i++)
	{
		if(visited[i]==0)
		{
			dfs(i);
			a++;		
			result[k]=(i+1);
			k++;

		}
	}
	printf("Topological sort is : ");
	for( int i=0;i<n;i++)
	{
		printf("%d  ",result[k-i-1]);
	}
	return 0;
}
void dfs(int i)
{
	visited[i]=1;
	for(int j=0;j<n;j++)
	{
		if(visited[j]!=1 && mat[i][j]!=0)
		{
			dfs(j);
			result[k]=(j+1);
			k++;
		}
	}
}	


	
