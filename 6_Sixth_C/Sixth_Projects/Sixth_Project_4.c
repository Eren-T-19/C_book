#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;
    int vowel_count = 0;
    printf("Enter a senctence: ");
    ch = getchar();
    while (ch != '\n')
    {
        ch = tolower(ch);
        if (ch == 'a' || ch == 'u' || ch == 'i' || ch == 'o' || ch == 'e')
        {
            vowel_count++;
        }
        ch = getchar();
    }

    printf("Your sentence contain(s) %d vowel(s)\n", vowel_count);

    return 0;
}