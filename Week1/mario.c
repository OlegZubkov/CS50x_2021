#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    // Asking for the height
    do
    {
        n = get_int("Height: ");
    }
    while (n > 8 || n < 1);
    int k = 1;
    // Printing pyramid
    for (int i = n; i > 0; i--)
    {
        int j = i - 1;
        // Printing spaces
        while (j > 0)
        {
            printf(" ");
            j--;
        }
        // Printing hashes
        while (j < k)
        {
            printf("#");
            j++;
        }
        // Adding new line
        printf("\n");
        k++;
    }
}