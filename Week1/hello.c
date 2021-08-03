# include <stdio.h>
# include <cs50.h>

int main(void)
{
    // Aksing user's name and greeting
    string name = get_string("What's your name?\n");
    printf("hello, %s\n", name);
}