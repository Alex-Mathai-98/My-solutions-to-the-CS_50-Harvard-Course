# include<stdio.h>
# include<cs50.h>
# include<ctype.h>
# include<string.h>

int main(int argc, string argv[])
{
    if(argc != 2)
      {
       printf("type in only 2 command lines\n");
       return 1;
      }
     
     else if( argc == 2)
    { 
           int q = 0;    /* to find a non alphabetical character */
           do
           {
               if(isalpha(argv[1][q]))
                 { 
                    q++;
                 }
           
               else
                 {
                   printf("use only alphabetical characters!\n");
                   return 1;
                 }
           }
           while (q < strlen(argv[1]));
          
        {
         string text = GetString();
         int f = strlen(argv[1]);
         int j = strlen(text);
         int z = -1;
            for ( int i = 0; i < j; i++)
            {
                /*
                  if(isalpha(text[i]))
                  { z++;
                  
                  if( z == f)  // to repeat the keyword
                    { 
                      z = z - f;
                    }
                  // just some math stuff
                  if (islower(text[i]) && islower(argv[1][z]))
                    {
                    printf("%c", (( ((text[i] - 97) + (argv[1][z] - 97)) % 26) + 97)); 
                    } 
                
                  else if( islower(text[i]) && isupper(argv[1][z]))
                       {
                         printf("%c", (( ((text[i] - 97) + (argv[1][z] - 65)) % 26) +97));
                       }
                 
                  else if(isupper(text[i]) && islower(argv[1][z]))
                       {
                          printf("%c", (( ((text[i] - 65) + (argv[1][z] - 97)) % 26) + 65));
                       }
                
                  else if(isupper(text[i]) && isupper(argv[1][z]))
                       {
                        printf("%c", (( ((text[i] - 65) + (argv[1][z] - 65)) % 26) + 65));
                       }
                   }
                
                   // other characters
                  else
                      {
                        printf("%c", text[i]);
                      }
                }    
        */
        
        //the secondway - the better way
                  if(isalpha(text[i]))
                {
                  z++;
                  int bit = z%f;
                  int diff = (toupper(argv[1][bit])-65);
                  if(islower(text[i]))
                  {
                  printf("%c", ( ((text[i] + diff)-97) % 26) + 97);
                  }
                  else if(isupper(text[i]))
                  {
                  printf("%c", ( ((text[i] + diff)-65) % 26) + 65);
                  }
                } 
                  else 
                    printf("%c", text[i]);
                    continue;
            }
        printf("\n");
        return(0);
      }        
    }  
}