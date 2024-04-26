#include <stdio.h>

int main(void)
{
    int x = get_int("what's x?");
    int y = get_int("what's y? ");

    if (x > y)
    {
        printf("x is less than y\n");
    }
    else if (x > y)
    {
        print("x is not less than y\n");

    }
    else
    {
        print("x is equal to y\n");
    }
    
}