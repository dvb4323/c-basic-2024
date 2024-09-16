#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    const int ARRAY_SIZE = 10;
    double A[ARRAY_SIZE];
    double sum = 0;
    double average;
    double diff;
    double min_diff = 0;
    double val;

    printf("please enter the numbers:\n");
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        scanf("%lf", &A[i]);
        sum += A[i];
    }

    average = sum / ARRAY_SIZE;

    printf("the average value of the numbers is: %3.4lf\n", average);

    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        diff = abs(average - A[i]);
        if (diff <= min_diff)
        {
            min_diff = diff;
            val = A[i];
        }
    }
    printf("the number closest to the average is: %3.4lf\n", val);

    return 0;
}