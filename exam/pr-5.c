#include <stdio.h>

struct guest 
{
    char guest_name[50];
    int guest_year;
    char guest_city[50];
};

int main() 
{
    int i, n;

    printf("Enter a room_quantity  => ");
    scanf("%d", &n);

    struct guest room[n];

    for (i = 0; i < n; i++) 
	{
    	printf("\nEnter Details For Guest => %d\n", i + 1);
    	
    	printf("Enter you Name => ");
    	scanf("%s", &room[i].guest_name);
    	fflush(stdin);
    	
    	printf("Enter you established_year => ");
    	scanf("%d", &room[i].guest_year);
    	fflush(stdin);

    	printf("Enter you City => ");
    	scanf(" %[^\n]", room[i].guest_city);
    	
	}

}