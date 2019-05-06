#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void insertion(int a[],int n)
{	
	int i,j,x;
	for(i=1;i<n;i++)
	{
	        x=a[i];
	        j=i-1;
	        while(x<a[j]&& j>=0)
	     	{
	        	a[j+1]=a[j];
	        	j--;
	        }
	        a[j+1]=x;
	}
}				
void main()	
{
	int a[1000],b[1000],c[1000],n,k,u,i,j;
	clock_t t1,t2,t3,t4,t5,t6;
	double m,p,q;
	FILE *ptr2;
	ptr2=fopen("insertion.dat","a");
	printf("Enter the no: of elements : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		a[i]=rand()%100;
	}
	t1=clock();
	insertion(a,n);
	for(i=0;i<n;i++)
	{
		printf("%d  ",a[i]);
	}
	t2=clock();
	m=(double)(t2-t1)/CLOCKS_PER_SEC;
	printf("\nclock for random =%f",m);
	fprintf(ptr2,"%d %f",n,m);
	fprintf(ptr2,"\n");
	printf("\nEnter the no: of elements : ");
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		b[i]=i+1;
	}
	t3=clock();
        insertion(b,k);
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
	}
	t5=clock();
        insertion(c,u);
	for(i=0;i<u;i++)
	{
		printf("%d  ",c[i]);
	}
	t6=clock();
	q=(double)(t6-t5)/CLOCKS_PER_SEC;
	printf("\nclock for descending =%f",q);
	fclose(ptr2);
}
