/*
In the SCRABBLE Crossword Game, players form words using small tiles,
each containing a letter and a face value.
The face value varies from one letter to another, based on the let- ter's rarity.
(Here are the face values: 1: AEILNORSTU, 2: DG, 3: BCMP, 4: FHVWY, 5: K, 8: JX, 10: QZ.)
Write a program that computes the value of a word by summing the values of its letters:
Enter a word: pitfall
Scrabble value: 12
*/

#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;
    int points = 0;
    printf("Enter phone number: ");
    ch = getchar();
    while (ch != '\n')
    {
        ch = tolower(ch);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'l' || ch == 'n' || ch == 'o' || ch == 'r' || ch == 's' || ch == 't' || ch == 'y')
        {
            points += 1;
        }
        else if (ch == 'd' || ch == 'g')
        {
            points += 2;
        }
        else if (ch == 'b' || ch == 'c' || ch == 'm' || ch == 'p')
        {
            points += 3;
        }
        else if (ch == 'f' || ch == 'h' || ch == 'v' || ch == 'w' || ch == 'y')
        {
            points += 4;
        }
        else if (ch == 'k')
        {
            points += 5;
        }
        else if (ch == 'j' || ch == 'x')
        {
            points += 8;
        }
        else if (ch == 'q' || ch == 'z')
        {
            points += 8;
        }

        ch = getchar();
    }

    printf("Scrabble value: %d", points);

    return 0;
}
