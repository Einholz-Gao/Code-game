 
#include <stdio.h>
#include<string.h>

int main(void)
{
	int number;
	char text[20];

	printf("Enter a number: ");
	scanf("%d", &number);

	sprintf(text, "%d", number);

	printf("\nYou have entered: %c", text[3]);

    int a = strlen(text);
        printf("\n    %i", a);

	return 0;
}
