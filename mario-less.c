#include <cs50.h>
#include <stdio.h>

void print_row(int spaces, int bricks, int spaces2, int bricks2);
int height;
int main(void)
{
   do
   {
    height = get_int("Height: ");
   }
   while(height <= 0 || height >= 8);

    // for loop to print height number of times
   for (int i = 0; i < height; i++)
   {
        print_row(height, i+1, 1, i+1);
   }
}


void print_row(int spaces, int bricks, int spaces2, int bricks2)
{
    // spaces variable
    for (int j = 0; j < spaces - bricks; j++)
    {
        printf(" ");
    }

    // bricks right aligned
    for (int j = 0; j < bricks; j++)
    {
        printf("#");
    }

    // double space variable
    for (int j = 0; j < spaces2; j++)
    {
        printf("  ");
    }

    // bricks left aligned
    for (int j = 0; j < bricks2; j++)
    {
            printf("#");
    }

    printf("\n");
}
