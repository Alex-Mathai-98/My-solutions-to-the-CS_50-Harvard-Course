#include <stdio.h>

void print(int row, int maxele,int mid_col)
{
	for(int k = 1; k <= maxele;k++)
	{
		if( k <= mid_col+row && k >= mid_col-row && k != mid_col)
		{
			printf("#");
		}
			
		else 
		{
			printf(" ");
		}
	}

	printf("\n");
}



int main()
{
	int height;
	scanf("%d",&height);

	int mid_col = height + 1;
	int maxele = 2*height + 1; 

	for(int j = 1; j <= height;j++)
	{
		print(j,maxele,mid_col);
	}
}