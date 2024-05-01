#include <stdio.h>
#include <cs50.h>

float average(int array[]);
int main(void)
{
    int scores[3];
    for (int i = 0; i < 3; i++)
    {
        scores[i] = get_int("score: ");
    }
    printf("Average: %f\n", average(scores));
}

float average(int array[])
{
    array[0] + array[1] + array[2]
}