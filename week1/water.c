# include<stdio.h>
# include<cs50.h>

int main(void)
{
    printf("please type in the duration of your shower in minutes\n");
    int x = GetInt();
    int y = x*12;
    
    printf("the no equivalent bottles of water used up are %d.\n", y);
}