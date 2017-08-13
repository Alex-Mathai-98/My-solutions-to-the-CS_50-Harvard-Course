/**
 * generate.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Generates pseudorandom numbers in [0,LIMIT), one per line.
 *
 * Usage: generate n [s]
 *
 * where n is number of pseudorandom numbers to print
 * and s is an optional seed
 */
 
#define _XOPEN_SOURCE

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// constant
#define LIMIT 65536

int main(int argc, string argv[])
{
    // TODO: the command line can have only two integer inputs. 'n' and 's'
    if (argc != 2 && argc != 3)
    {
        printf("Usage: generate n [s]\n");
        return 1;
    }

    // TODO: converting the command line string input to an int
    int n = atoi(argv[1]);

    // TODO: if 's' has been typed then input 's' to the srand48 function converting the argv[2] to an input integer
    if (argc == 3)
    {
        srand48((long int) atoi(argv[2])); // using the seed function for drand48 as the seed has been provided
    }
    else
    {
        srand48((long int) time(NULL));
    }

    // TODO: Printing the output using drand48 fn
    for (int i = 0; i < n; i++)
    {
        printf("%i\n", (int) (drand48() * LIMIT));
    }

    // success
    return 0;
}