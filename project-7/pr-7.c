#include<stdio.h>

void cal() 
{
	
	int p,a,b;
	 
	do 
	{
	 	printf("1. Addition\n");
	 	printf("2. Subtraction\n");
	 	printf("3. Multiplication\n");
	 	printf("4. Division\n");
	 	printf("5. Percentage\n");
	 	printf("0. Exit\n");
	 	
	 	printf("Enter Your Choice: ");
	 	scanf("%d",&p);
	 	
	 	if(p>=1 && p<=5) 
		{
	 		printf("Enter the first number: ");
	 		scanf("%d",&a);
	 		printf("Enter the second number: ");
	 		scanf("%d",&b);
	 		
	 		switch(p) 
			{
				case 0:
					printf("Code Is Exit.....");
					break;
	 			case 1:
	 				printf("Addition IS: %d\n",a+b);
	 				break;
	 			case 2:
	 				printf("Subtraction IS: %d\n",a-b);
	 				break;
				case 3:
	 				printf("Multiplication IS: %d\n",a*b);
	 				break;
				case 4:
	 				printf("Division IS: %d\n",a/b);
	 				break;
	 			case 5:
	 				printf("Percentage IS: %d\n",a%b);
	 				break;	
			}
		}
		else
		{
			
		 	printf("Enter valid number.\n");
				
		}
	}
	
	while(p!=5);
}

main() 
{
	 cal();
	 
}