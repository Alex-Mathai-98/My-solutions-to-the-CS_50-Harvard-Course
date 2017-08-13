# include<stdio.h>
# include<cs50.h>
# include<ctype.h>
# include<stdlib.h>
# include<string.h>

int main(int argc, string argv[])

    { 
     
     if (argc != 2)
        {
         printf("type in only 2 command lines!\n");
         return 1;
        }
        
    int j = atoi(argv[1]);
    if(argc == 2 && j < 0)
    {
      printf("type a non negative integer!\n"); 
      return 1;
    }
     else 
        { 
         string s = GetString();
         
         for (int i  = 0, n = strlen(s); i < n ; i++)
         
             { 
                if(isalpha(s[i]) && isupper(s[i]))
                  {
                    printf("%c", ((( (s[i] + j) - 65) % 26) + 65));
                  }
           
                else if(isalpha(s[i]) && islower(s[i]))
                       {  
                         printf("%c", ((( (s[i] + j) - 97) % 26) + 97));
                       }
                else
                    {printf("%c", s[i]);
                    }
             }
         printf("\n");
         return 0;        
        }
    }    
       
