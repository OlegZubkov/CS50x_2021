#include <cs50.h>
#include <stdio.h>
#include <math.h>


int main(void)
{
    float owed;
    int coins = 0;
    // Asking for change owed
    do
    {
        owed = get_float("Change owed: ");
    }
    while (owed < 0);
    // calculating quantity of cents owed
    int cents = round(owed * 100);
    // calculating number of quarters
    while (cents >= 25)
    {
        cents = cents - 25;
        coins++;
    }

    // adding number of dimes
    while (cents >= 10)
    {
        cents = cents - 10;
        coins++;
    }

    // adding number of nickels
    
    while (cents >= 5)
    {
        cents = cents - 5;
        coins++;
    }
    // adding number of pennies
    while (cents >= 1)
    {
        cents = cents - 1;
        coins++;
    }
    printf("%i\n", coins);
}