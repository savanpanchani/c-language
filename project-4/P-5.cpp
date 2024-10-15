#include<stdio.h>

/*
		5
	  4 5 4 
	3 4 5 4 3 
  2 3 4 5 4 3 2 
1 2 3 4 5 4 3 2 1

*/
main()
{
	int i,j,s;
	
	for(i=5;i>=1;i--)
	{
		
		for(s=1;s<=i;s++)
		{
			printf("  ");
		}
		for(j=i;j<=5;j++)
		{
			printf("%d ",j);
		}
		for(j=4;j>=i;j--)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}