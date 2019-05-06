#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void selection(int a[],int n)
{	
	int i,small,j,pos,temp;
	for(i=0;i<n;i++)
	{
	   	small=a[i];
	    pos=i;
	    for(j=i+1;j<n;j++)
	   	{
	    	if(a[j]<small)
	    	{
	    			small=a[j];
	    			pos=j;
	    	}
	    }
	    temp=a[pos];
	    a[pos]=a[i];
	    a[i]=temp;
	}
}
void main()	
{
	int a[1000],b[1000],c[1000],n,k,u,i,j;
	clock_t t1,t2,t3,t4,t5,t6;
	double m,p,q;
	FILE *ptr;
	ptr=fopen("selection.dat","a");
	printf("Enter the no: of elements : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		a[i]=rand()%100;
	}
	t1=clock();
	selection(a,n);
	for(i=0;i<n;i++)
	{
		printf("%d  ",a[i]);
	}
	t2=clock();
	m=(double)(t2-t1)/CLOCKS_PER_SEC;
	printf("\nclock for random =%f",m);
	fprintf(ptr,"%d %f",n,m);
	fprintf(ptr,"\n");
	printf("\nEnter the no: of elements : ");
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		b[i]=i+1;
	}
	t3=clock();
        selection(b,k);
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
        selection(c,u);
	for(i=0;i<u;i++)
	{
		printf("%d  ",c[i]);
	}
	t6=clock();
	q=(double)(t6-t5)/CLOCKS_PER_SEC;
	printf("\nclock for descending =%f",q);
	fclose(ptr);
}
