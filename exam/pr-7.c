#include<stdio.h>
main()
{
	int i,j;

     for (int i = 10; i >= 6; i--) {
        for (int j = 0; j < (11 - i); j++) {
            printf("%d ", i * i);
        }
        printf("\n");
		}
}