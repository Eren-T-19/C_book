#include <stdio.h>

/* Prints int and floats values in various formats*/

/*
%d Displays i in decimal form, using minimum amount of space.

%5d Displays i in decimal form, using a minimum of five characters.
    Since i requires only two characters, three spaced were added.

%-5d Displays i in decimal form, using a minimum of five characters;
    since the value of i doesn't require five characters, the spaces are added afterward(that is, left-justified in a field of length five)

%5.3d Displays i in decimal form, using a minimum of five characters overal and a minimum of threee digits.Since i only two digits long,
    an extra zero was added to guarantee three digits.The resulting number is only three characters long, so two spaces were added,
    for a total of five characters(i is right-justified).

%10.3f Displays x in fixed decimal form, using 10 charaters overall, with three digits after decimal point.Since z requires only seven characters
    (three before the decimal point itself), three spaces preced x.

%10.3e Displays x in exponential form, using 1 charcters overall, with three digits after the decimal point. x requires nine charcters altogether
    (including the exponent), so one space preceds x.

%-10g Displays x in either fixed decimal form or exponentia form, using 10 characters overall.In this case, printf chose to display x in field decimal form.
    The presence of the minus sign forces left justification, so x is followed by four spaces.
*/

int main()
{
    int i;
    float x;

    i = 40;
    x = 839.21f;

    printf("|%d|%5d|-%5d||%5.3d|\n", i, i, i, i);
    printf("|%10.3f|%10.3e|%-10g\n", x, x, x);
    return 0;
}