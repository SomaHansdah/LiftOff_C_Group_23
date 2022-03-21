#include<stdio.h>
#include<string.h>

int main()
{
     char a[50],b[50];
     printf("\n Enter first string: ");
     gets(a);
     printf("\n Enter second string: ");
     gets(b);
     strcat(a,b);
     printf("\n Concatenated String: ");
     puts(a);
     return(0);
}
