# include <stdio.h>
# include <cs50.h>
# include <ctype.h>
# include <string.h>

int main(void)
{   
   string k = GetString();
   int n = strlen(k);
   int y = 0;
   for(int z = 0; z < n; z++)
      {
       if(k[z] == (char) 32)
       y++;
      }
   int numbers[y];
   int l = 0;
   for(int i = 0; i < n; i++)
      {
       if(k[i] == (char) 32)
         { 
           numbers[l] = i;
           l++;
         }
      }
   printf("%c", toupper(k[0]));
  
   for (int i = 0; i < y; i++)
       {
         printf("%c", toupper( k[numbers[i] + 1]));
       }
   printf("\n");
}