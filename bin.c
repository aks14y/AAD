#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void bin(int a[],int n,int x)
{
	int mid,beg=0,end=n-1;
	while(beg<=end)
	{
		mid=(beg+end)/2;
		if(a[mid]==x)
		{
			
			break;
		}
		else if(a[mid]>x)
			end=mid-1;
		else
			beg=mid+1;
	}
	if(beg>end)
		printf("Not found ");
	else
		printf("Element found at position %d ",mid+1);
}
int main()
{
	int n,a[1000],ele;
	double m;
	clock_t t1,t2;
	FILE *ptr1;
	ptr1=fopen("bin.dat","a");
	printf("Enter the number of elements : ");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		a[i]=i+1;
	}
	
	printf("Enter the element to find : ");
	scanf("%d",&ele);
	t1=clock();
	bin(a,n,ele);
	t2=clock();
	m=(double)(t2-t1)/CLOCKS_PER_SEC;
	printf("\nclock for random =%f",m);
	fprintf(ptr1,"%d %f",n,m);
	fprintf(ptr1,"\n");
	fclose(ptr1);
}

