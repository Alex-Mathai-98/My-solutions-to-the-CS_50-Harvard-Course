/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */
       
#include <cs50.h>
#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    if(n <= 0)
    {
        return false;
    }
    int mid;
    int min = 0;
    int max = n-1;
    
    while(max >= min)
    {
        mid = (max + min)/2;
        if(value == values[mid])
        {
            return true;
        }
        
        else if(value > values[mid])
        {
            min = mid + 1;
        }
        
        else
        {
            max = mid-1;
        }
    }
    
    return false;
}

/**
 * Sorts array of n values.
*/
 
void sort(int values[], int n)
{
    int temp,k,j;
    // TODO: implement an O(n^2) sorting algorithm
    for(j=n-1;j>=0;j--)
    {
        for(k = 0;k<j;k++)
        {
            if(values[k] > values[k+1])
            {
                temp = values[k];
                values[k] = values[k+1];
                values[k+1] = temp;
            }
        }
    }
    return;
}