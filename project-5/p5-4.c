#include <stdio.h>

main()
{
	int row,col;
	
	printf("enter the row :");
	scanf("%d",&row);
	printf("enter the col :");
	scanf("%d",&col);
	
	int a[row][col];
	int i,j;
	
	printf("\n\n");
	
		for(i=0 ; i<row ; i++)
		{
			for(j=0 ; j<col ; j++)
			{
				printf("enter a[%d][%d] :",i ,j);
				scanf("%d",&a[i][j]);
			}
				printf("\n");
		}
		
		int r,rsum=0;
		
		printf("\n\n enter row number :");
		scanf("%d",&r);
		
		for(j=0 ; j<col ; j++)
		{
			printf("%d",a[r][j]); 
			rsum += a[r][j];
		}
		
		printf("\n row sum : %d",rsum);
		
		
		int c,csum=0;
		
		printf("\n\n enter col number :");
		scanf("%d",&c);
		
		for(i=0 ; i<row ; i++)
		{
			printf("%d",a[i][c]); 
			csum += a[i][c];
		}
		
		printf("\n col sum : %d",csum);
}