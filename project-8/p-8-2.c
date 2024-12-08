#include<stdio.h>

void my() 
{
	
	int a[50][50];
	int (*ptr)[50];
	int n; 
	
	printf("Enter array size: ");
	scanf("%d", &n);
	
	ptr = a;
	
	printf("\nEnter array elements:\n");	
	
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++)
		{
			
			printf("Enter the value of A[%d][%d] = ", i, j);
			scanf("%d", &a[i][j]);
			
		}
	}

	printf("\nCubes Of All Elements:\n");

	for(int i=0; i<n; i++) 
	{
		
		for(int j=0; j<n; j++) 
		{
			
			printf("%d ", ptr[i][j] * ptr[i][j] * ptr[i][j]);
		
		}
		printf("\n");
	}
}

int main() 
{
	my();
}