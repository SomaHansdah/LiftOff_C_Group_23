#include<stdio.h>
int main()
{
	int n[2][2],a,s=0,p=1;
	
	for(int i=0;i<2;i++)
	  for(int j=0;j<2;j++)
	  {
	  	  printf("\n Enter element of %d row & %d column: ",i+1,j+1);
	  	  scanf("%d",&n[i][j]);
	  	  
	  }
	for(int i=0;i<2;i++)
	  for(int j=0;j<2;j++)
	  {
	  	   s+=n[i][j];
	  	   p*=n[i][j];
	  }
	printf("\n Sum of all elements of the matrix: %d",s);
	printf("\n Product of all elements of the matrix: %d",p);
	return(0);
}
