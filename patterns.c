#include<stdio.h>
#include<cs50.h>

int main(void)
{
	int pat = get_int("Enter type of pattern (1 or 2) ");
	int row = get_int("\nNumber of rows \n");

	if(pat == 1)
	{
		while(row)
		{
			for(int i = row; i > 0; i--)
				printf("%c",'#');
			printf("\n");
			row--;
		}
	}
	else
	{
		for(int j = 1; j <= row; j++)
		{
			for(int i = 1; i <= j; i++)
				printf("%c",'#');
			printf("\n");
		}
	}
	return 0;
}