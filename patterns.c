#include<stdio.h>
#include<cs50.h>
int main(void)
{
	int i,j,k;
	int pat = get_int("Enter type of pattern (1 or 2)\n");
	int row = get_int("Number of rows\n");
	if(pat == 1)
	{
		for(j = row; j > 0; j--)
		{
			for(i = j; i > 0; i--)
				printf("#");
			if(j != 1)
			{
				printf("\n");
			}
		}
	}
	else
	{
		for(j = 1; j <= row; j++)
		{
			printf("\n");
			for(k = 1; k <= row-j; k++)
				printf(" ");
			for(i = 1; i <= j; i++)
				printf("#");
			
		}
	}
}
