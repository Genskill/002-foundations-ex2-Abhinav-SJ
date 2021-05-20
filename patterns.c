#include<stdio.h>
#include<cs50.h>

int main(void)
{
	int pat = get_int();
	int row = get_int();

	if(pat == 1)
	{
		for(int j = row; j > 0; j--)
		{
			printf("\n");
			for(int i = j; i > 0; i--)
				printf("#");
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
