#include<stdio.h>
int main()
{
	int i,n,a=0,b=1;
	int c=a+b;
	printf("Enter number of terms: ");
	scanf("%d",&n);
	printf("Fibonacci Series: %d, %d, ",a,b);
	for(i=3;i<=n;i++)
	{
		 if(i==n)
		    printf("%d;",c);
		 else
		    printf("%d, ",c);
		 a=b;
		 b=c;
		 c=a+b;
	}
	return(0);
}
