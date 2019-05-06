#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void linear(int a[],int n,int x)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(a[i]==x)
			break;
	}
	if(i==n)
		printf("Not found");
	else 
		printf("Element found at position %d",i+1);

	
}
int main()
{
	int n,a[1000],ele;
	double m;
	clock_t t1,t2;
	FILE *ptr;
	ptr=fopen("linear.dat","a");
	printf("Enter the number of elements : ");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		a[i]=i+1;
	}
	
	printf("Enter the element to find : ");
	scanf("%d",&ele);
	t1=clock();
	linear(a,n,ele);
	t2=clock();
	m=(double)(t2-t1)/CLOCKS_PER_SEC;
	printf("\nclock for random =%f",m);
	fprintf(ptr,"%d %f",n,m);
	fprintf(ptr,"\n");
	fclose(ptr);
}

