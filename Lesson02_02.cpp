#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int main()
{
	char input[100];

	while (true)
	{
		printf("Enter somthing: ");
		scanf("%100[^\n]%*c", input);
		int i = 0;
		while (input[i] >= '0' && input [i] <= '9')
		{
			i++;
		}
		if (i == strlen(input))
			break;
	}
	printf("You have entered a positive integer.");
}