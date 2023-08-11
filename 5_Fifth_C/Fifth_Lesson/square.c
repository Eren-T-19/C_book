#include <stdio.h>

int main()
{
    int len_table, i;

    printf("This program prints a table of squares.\n");
    printf("Enter a number of entries in table: ");
    scanf("%d", &len_table);

    i = 1;
    while (i <= len_table)
    {
        printf("\n%d      %d\n", i, i * i);
        i++;
    }
    return 0;
}