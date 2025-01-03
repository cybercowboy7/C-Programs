#include <cs50.h>
#include <stdio.h>

// create variable for each denomination of coin
int p = 1;
int n = 5;
int d = 10;
int q = 25;
int counter = 0;

int change;

int main(void)
{
    // prompt user for int that is greater than 0
    do
    {
        change = get_int("Change owed: ");
    }
    while(change <= 0);

// create a while loop to reiterate the if function until change = 0
     while (change > 0)
     {
        if (change >= q)
        {
            change = change - q;
            counter += 1;
        }
        else if (change >=d)
        {
            change = change - d;
            counter += 1;
        }
        else if (change >=n)
        {
            change = change - n;
            counter += 1;
        }
        else if (change >= p)
        {
            change = change - p;
            counter += 1;
        }
     }
     printf("%i\n", counter);

}



