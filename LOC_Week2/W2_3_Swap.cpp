#include<stdio.h>
int main()
{
	int on,i=1,j,m,n,z,t;
	int a[50];
	printf("\n Enter the number: ");
	scanf("%d",&on);
	n=on;
	m=on;
    z=on%10;
	while(n>=10)
	{
		n=n/10;
     	i++;
	} 
    
	for(j=i-1;j>=0;j--)
	{
		a[j]=m%10;
		m=m/10;
    }
    
    t=a[0];
    a[0]=a[i-1];
    a[i-1]=t;
    
	printf("\n Original Number: %d",on);
	printf("\n Swapped Number: ");
	    for(j=0;j<i;j++)
    	printf("%d",a[j]);
	return(0);
}
