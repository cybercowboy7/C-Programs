#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int points[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int computeScore(string word);

int main(void)
{
    string playerOne = get_string("Player One: ");
    string playerTwo = get_string("Player Two: ");


    int score1 = computeScore(playerOne);
    int score2 = computeScore(playerTwo);

    if (score1 > score2)
    {
        printf("Player One Wins!\n");
    }
    else if (score1 < score2)
    {
        printf("Player Two Wins!\n");
    }
     else
    {
        printf("Tie!\n");
    }

}



int computeScore(string word)
{
    int score = 0;

    for(int j = 0, length = strlen(word); j < length; j++)
    {
        if (isupper(word[j]))
        {
            score += points[word[j] - 'A'];
        }
        else if (islower(word[j]))
        {
            score += points[word[j] - 'a'];
        }
    }
    return score;
}

