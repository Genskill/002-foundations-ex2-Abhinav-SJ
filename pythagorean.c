#include<stdio.h>
#include<cs50.h>
#include<math.h>

int main(void)
{
	float a = get_float("side 1\n")
	float b = get_float("side 2\n")
	float c = get_float("side 3\n")
	if((pow(a,2) + pow(b,2) == pow(c,2)) || (pow(b,2) + pow(c,2) == pow(a,2)) ||(pow(a,2) + pow(c,2) == pow(b,2)))
		printf("Yes");
	else
		printf("No");
	
	return 0;
}