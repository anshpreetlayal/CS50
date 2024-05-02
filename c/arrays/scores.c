#include <stdio.h>
#include <cs50.h>

const int N = 3;
float average(int length,  int array[]);
int main(void)
{
    int scores[N];
    for (int i = 0; i < N; i++)
    {
        scores[i] = get_int("score: ");
    }
    printf("Average: %f\n", average(scores));
}

float average(int array[])
{
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum = sum + array[i];
    }
    return sum / (float) N;
}

int main(void)
{
    string s = "HI!";
    print("%i %i %i %i\n", s[0], s[1], s[2], s[3]);
}