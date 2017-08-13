#include <stdio.h>

int main()
{
	int height;
	scanf("%d", &height);

	int temp = height -1;
	int maxele = height + 1;
	int rem_ele;

	while(temp >= 0)
	{
		for(int h = 0; h < temp;h++)
		{
			printf(" ");
		}

		rem_ele = maxele - temp;
		for(int k = 0; k < rem_ele;k++)
		{
			printf("#");
		}

		printf("\n");
		temp--;
	}


}