/*
Write a program that calculates the average word length for a sentence:
*/
#include <stdio.h>

int main()
{
    int word_count = 1, total_letter = 0;
    float average = 0.0;
    char ch;

    printf("Enter a message: ");
    ch = getchar();
    while (ch != '\n')
    {
        if (ch == ' ')
        {
            word_count++;
        }
        else
        {
            total_letter++;
        }
        ch = getchar();
    }
    average = (float)total_letter / word_count;
    printf("average is: %.2f", average);

    return 0;
}