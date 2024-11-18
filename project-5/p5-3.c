#include<stdio.h>
main() 
{
	
	 int i,j,n;
	 int a[20][20];
	 int transpose;
	 
	 printf("Enter Array's Row & Column size: ");
	 
	 scanf("%d",&n);
	 
	 printf("\nEnter Array's Elements:\n");
	 
	 for(i=0;i<n;i++) 
	{
	 	for(j=0;j<n;j++) 
		{
	 		printf("Enter Value a[%d][%d] = ",i,j);
	 		scanf("%d",&a[i][j]);
		}
	}
	 
	 for(i=0;i<n;i++) 
	{
	 	for(j=0;j<n;j++)
		{
	 		transpose = a[i][j];
	 		a[i][j] = a[j][i];
	 		a[j][i] = transpose;
		}
	}
	 
	 printf("\n\n");
	 
	 printf("The Transpose Matrix Of An Array:\n");
	 
	 for(i=0;i<n;i++) 
	{
	 	for(j=0;j<n;j++) 
		{
	 		printf("%d ",a[j][i]);
		}
		 printf("\n");
	}
	
}