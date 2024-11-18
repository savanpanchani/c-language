#include<stdio.h>
main() 
{
	
	 int a[row][col];
	 int i,j;
	 int row,col;
	 int n;
	 
	 printf("ENTER ARRAY'S ROW SIZE: ");
	 scanf("%d",&row);
	 printf("Enter ARRAY'S COLUMN SIZE: ");
	 scanf("%d",&col);
	 
	 printf("\nENTER ARRAY's Elements:\n");
	 
	 for(i=0;i<row;i++) 
	 {
	 	for(j=0;j<col;j++) 
		 {
	 		printf("Enter Value Of a[%d][%d] = ",i,j);
	 		scanf("%d",&a[i][j]);
		}
	 }
	 
	 n = a[0][0];
	 
	 for(i=0;i<row;i++) 
	 {
	 	for(j=0;j<col;j++) 
		 {
	 		if(n<a[i][j]) 
			{
	 			n = a[i][j];
			}
		}
	 }
	 
	 printf("\nThe Largest Element Is: %d",n);
}