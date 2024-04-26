#include <stdio.h>

int main(void)
{   
    // get grid size
    int n;
    do
    {
        n = get_int("size: ");
    
    } while (n < 1); 
        
    }
    // prints  grids
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }
