#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int scores[3];
    for (int i = 0; i < 3; i++)
    {
        scores[i] = get_int("score: ");
    }
    printf("Average: %f\n", (score[0] + score[1] + score[2]) / 3.0);
}