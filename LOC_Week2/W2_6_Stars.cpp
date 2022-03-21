#include<stdio.h>
int main()
{
	 int N,a[50][50],i,j;
	 printf("Enter the number of rows/columns you want to have in square matrix: ");
	 scanf("%d",&N);
	 for(i=0;i<N;i++)
	 {
	 	for(j=0;j<N;j++)
	 	{
	 		if(i==0||j==0||i==(N-1)||j==(N-1))
	 		printf("* ");
	 		else
	 		printf("  ");
		 }printf("\n");
	 }
	 return(0);
}