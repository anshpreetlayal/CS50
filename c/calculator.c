#include <stdio.h> 

int main(void)
{
    long x = get_long("x: ");
    long y = get_long("y: ");

    print("%i\n", x + y);
}