#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Asking starting size of population. Starting size shouldn't be less then 9
    int start_size;
    do
    {
        start_size = get_int("Start size: ");
    }
    while (start_size < 9);
    
    // Asking target size of population. Target size shouldn't be less then starting
    int end_size;
    do
    {
        end_size = get_int("End size: ");
    }
    while (end_size < start_size);
    
    // Calculating number of years needed to reach target
    int n = 0;
    int temp = start_size;
    while (temp < end_size)
    {
        temp = temp + temp / 3 - temp / 4;
        n++;
    }

    // Printing number of years
    printf("Years: %i\n", n);
}