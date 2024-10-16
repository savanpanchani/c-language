#include <stdio.h>

int main()
{
    int number, count = 0;
    
    printf("Enter Any Number : ");
    scanf("%d", &number);

    if (number == 0)
	{
        count = 1;
    } 
	else
	{
    	while (number != 0)
		{
            number /= 10;   
            count++;     
        }
    }

    printf("Total Number Of Digits: %d\n",count);
}