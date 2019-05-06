#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void quicksort(int a[100],int first,int last)
{	
	int i,j,pivot,temp;
	if(first<last)
	{
		pivot=first;
		i=first;
		j=last;
		while(i<j)
		{
			while(a[i]<=a[pivot]&&i<last)
			i++;
			while(a[j]>a[pivot])
			j--;
			if(i<j)
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;	
			}

		}	
		temp=a[pivot];
		a[pivot]=a[j];
		a[j]=temp;
		quicksort(a,first,j-1);
		quicksort(a,j+1,last);
	}

}
void main()	
{
	int a[1000],b[1000],c[1000],n,k,u,i,j;
	clock_t t1,t2,t3,t4,t5,t6;
	double m,p,q;
	printf("Enter the no: of elements : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		a[i]=rand()%100;
	}
	t1=clock();
	quicksort(a,0,n-1);
	for(i=0;i<n;i++)
	{
		printf("%d  ",a[i]);
	}
	t2=clock();
	m=(double)(t2-t1)/CLOCKS_PER_SEC;
	printf("\nclock for random =%f",m);
	printf("\nEnter the no: of elements : ");
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		b[i]=i+1;
	}
	t3=clock();
        quicksort(b,0,k-1);
	for(i=0;i<k;i++)
	{
		printf("%d  ",b[i]);
	}
	t4=clock();
	p=(double)(t4-t3)/CLOCKS_PER_SEC;
	printf("\nclock for ascending =%f",p);
	printf("\nEnter the no: of elements : ");
	scanf("%d",&u);
	for(i=u,j=0;i>0;i--,j++)
	{
		c[j]=i;
		/*printf("%d ",c[j]);*/
	}
	t5=clock();
        quicksort(c,0,u-1);
	for(i=0;i<u;i++)
	{
		printf("%d  ",c[i]);
	}
	t6=clock();
	q=(double)(t6-t5)/CLOCKS_PER_SEC;
	printf("\nclock for descending =%f",q);
}

