#include<stdio.h>
int i,j,n,mat[20][20],visited[20],a;
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
		}
	}
	printf("No of connected graph : %d ",a);
	return 0;
}
void dfs(int i)
{
	visited[i]=1;
	for(int j=0;j<n;j++)
	{
		if(visited[j]!=1 && mat[i][j]!=0)
			dfs(j);
	}
}	


	
	
