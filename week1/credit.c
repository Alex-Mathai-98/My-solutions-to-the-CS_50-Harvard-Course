#include <stdio.h>
#include <math.h>


int ifvalid(int digits, long long int a,int* chick)
{

	if(digits == 15)
	{
		int sum = a/pow(10,13);
		if(sum == 34 || sum == 37)
		{
			*chick = 1;
			return 1;
		}
	}

	else if (digits == 16)
	{
		int sum = a/pow(10,15);
		if(sum == 4)
		{
			*chick = 2;
			return 1;
		}

		sum = a/pow(10,14);
		if(sum == 51 || sum == 52 || sum == 53 || sum == 54 || sum == 55)
		{
			*chick = 3;
			return 1;
		}
	}

	else if(digits == 13)
	{
		int sum = a/pow(10,12);
		if(sum == 4)
		{
			*chick = 4;
			return 1;
		}
	}

	else 
		return 0;
}

int main()
{
	int digits;
	int* chick;
	int check = 0;
	long long int a;
	int long long temp;

	do
	{
    scanf("%lld", &a);
    printf("%lld\n", a);
	digits = 0;
	temp = a;
	while( temp > 0)
	{
		temp = temp/10;
		digits++;
	}
	check = ifvalid(digits,a,chick);
	}
	while(check == 0);
	
	int sum_even = 0;
	int i = 1;
	long long int temp2 = a;
	int bit;

	while(temp2 > 0)
	{
		bit = temp2%10;

		if(i%2 == 0)
		{
			if(2*bit < 10)
			{
				sum_even = sum_even + 2*bit;
			}

			else 
			{
				sum_even = sum_even + (2*bit)%10 + (2*bit)/10;
			} 
		}

		if(i%2 != 0)
		{
			sum_even = sum_even + bit;
		}

		temp2 = temp2/10;
		i++;
	}
	if(sum_even%10 == 0)
	{
		if(*chick == 1)
		{
			printf("AMEX\n");
		}

		else if(*chick == 2)
		{
			printf("VISA\n");
		}

		else if(*chick == 3)
		{
			printf("MASTERCARD\n");
		}

		else if(*chick == 4)
		{
			printf("VISA\n");
		}
	}

	else 
	{
		printf("get lost!\n");
	}

	return 0;
}