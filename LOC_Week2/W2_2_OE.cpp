#include<stdio.h>

int main()
{
	int N[10],i,o=0,e=0;
	printf("\n Enter ten numbers:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d", &N[i]);
	}
	for(i=0;i<10;i++)
	{
		if(N[i]%2==0)
		    e=e+N[i];
		else
		    o=o+N[i];
	}
	printf("\n Sum of Odd Numbers: %d",o);
	printf("\n Sum of Even Numbers: %d",e);
	return(0);
}