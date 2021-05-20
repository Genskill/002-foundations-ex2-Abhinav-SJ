#include<stdio.h>
#include<cs50.h>

int main(void)
{
	int pat = get_int("Enter type of pattern (1 or 2)\n");
	int row = get_int("Number of rows\n");

	if(pat == 1)
	{
		for(int j = row; j > 0; j--)
		{
			for(int i = j; i > 0; i--)
				printf("#");
			printf("\n");
		}
	}
	else
	{
		for(int j = 1; j <= row; j++)
		{
			printf("\n");
			for(int k = 1; k <= row-j; k++)
				printf(" ");
			for(int i = 1; i <= j; i++)
				printf("#");
			
		}
	}
	return 0;
}
