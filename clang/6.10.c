#include <stdio.h>

int main()
{
    int date = 1, month = 1, year = 1, e_date, e_month, e_year;

    printf("Enter a date (mm/dd/yy): ");
    scanf("%d/%d/%d", &e_month, &e_date, &e_year);

    while (date != 0 && month != 0 && year != 0)
    {
        printf("Enter a date (mm/dd/yy): ");
        scanf("%d/%d/%d", &month, &date, &year);

        if (date != 0 && month != 0 && year != 0) { 
        if (year < e_year) {
            e_year = year;
            e_month = month;
            e_date = date;
        }
        else if (year == e_year) {
            if (month < e_month) {
                e_year = year;
                e_month = month;
                e_date = date;
            }
            else if (month == e_month) {
                if (date < e_date) {
                    e_year = year;
                    e_month = month;
                    e_date = date;
                }
            }
        }
    }
    }

    printf("%2d/%2d/%02d is the earliest date", e_month, e_date, e_year);

    return 0;
}


                
           

