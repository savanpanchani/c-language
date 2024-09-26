#include<stdio.h>

main()
{

	int S,G,P,triangle;

	printf("Enter The Value of S = ");
	scanf("%d",&S);
	printf("Enter The Value of G = ");
	scanf("%d",&G);

	P=S+G;

	triangle=180-P;

	printf("Triangle Thrid Angle Is = %d",triangle);
}