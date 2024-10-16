#include<stdio.h>

main()
{
	int num,first,last,sum;
	
	printf("Enter The Value Of Any Number :- ");
	scanf("%d",&num);
	
	last = num % 10;
	
	while(num>=10)
	{
		num=num/10;
	}
	
	first = num;
	
	sum = last + first;
	
	printf("\n\n");
	printf("Sum Of First And Last Digit :- %d",sum);
}