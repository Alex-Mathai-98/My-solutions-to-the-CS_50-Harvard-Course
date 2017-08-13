# include <stdio.h>
# include <string.h>

int main(void)
{   
   char k[1000];
   gets(k);
   int n = strlen(k);
   int y = 0;
   for(int z = 0; z < n-1; z++)
      {
        if(k[z] == (char) 32 && k[z+1] != (char) 32) // Finding only the spaces needed by checking if the next character is not a space
        {
          y++;
        }
      }
   int numbers[y]; // number of such needed spaces
   int l = 0;
   for(int i = 0; i < n-1; i++)
      {
       if(k[i] == (char) 32  && k[i+1] != (char) 32)
         { 
           numbers[l] = i;  // finding the positions of the spaces
           l++;
         }
      }

   if(k[0] != (char) 32)    // in  the previous logic the first letter might get skipped if no space before the first name,so just to check for this case an if loop has been introduced 
   {
    printf("%c", toupper(k[0]));
   }

   for (int i = 0; i < y; i++)
       {
         printf("%c", toupper( k[numbers[i] + 1]));
       }
   printf("\n");
}