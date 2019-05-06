#include<stdio.h>
#include<time.h>
void main()
{
	int n,a[100],pos,pos1,j,large,ch,i;
	double m;
	printf("Enter the number of elements : ");
	scanf("%d",&n);
	clock_t t1,t2;
	for(i=0;i<n;i++)
	{
		printf("Enter the element %d :",i+1);
		scanf("%d",&a[i]);
	}
	t1=clock();
	printf("Enter the position to delete : ");
	scanf("%d",&pos);
	for(i=pos;i<n-1;i++)
	{
		a[i]=a[i+1];
	}
	for(i=0;i<n-1;i++)
	{
		printf("%d  ",a[i]);
	}		
	printf("Enter the index position after which data has to be displayed : ");
	scanf("%d",&pos1);
	for(i=pos1;i<n-1;i++)
	{
		large=a[pos1];
		for(j=pos1+1;j<=n-1;j++)
		{
			if(a[j]>large)
			{
				large=a[j];
				break;
			}
			else 
			{
				printf("Not found");
			}
		}
		printf("Next i=%d",large);
		break;	
	}
	t2=clock();
	m=(double)(t2-t1)/CLOCKS_PER_SEC;
	printf("\nclock=%f",m);
}

