#include <stdio.h>

int main()
{
    int dd1, dd2, mm1, mm2, yy1, yy2, year_comp, month_comp, day_comp;

    printf("Enter your first date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &mm1, &dd1, &yy1);

    printf("Enter your second date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &mm2, &dd2, &yy2);

    if (yy1 == yy2)
    {
        if (mm1 == mm2)
        {
            if (dd1 > dd2)
            {
                printf("Second date is earlier.\n");
            }
            else if (dd2 > dd1)
            {
                printf("First date is earlier.\n");
            }
            else
            {
                printf("Dates are identical.\n");
            }
        }

        else if (mm1 < mm2)
        {
            printf("First date is earlier than second date.\n");
        }

        else if (mm1 > mm2)
        {
            printf("Second date is earlier than first date.\n");
        }
    }
    else if (yy1 > yy2)
    {
        printf("Second date is earlier than first date.\n");
    }
    else
    {
        printf("First date is earlier than second date.\n");
    }

    return 0;
}
