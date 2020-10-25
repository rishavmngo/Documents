#include <stdio.h>

int main()
{
    int day, month, year;

    for (i = 0; day != 0 && month != 0 && year != 0; i++)
    {
        printf("Entet a date (mm/dd/yy):" );
        scanf("%d %d %d", &month, &day, &year);

        
        if (year < e_year)
            prinf("%d/%d/%d is the earliest date",e_month, e_day, e_year);
                
        else if (year == e_year)
        {
            if (month < e_month)
                prinf("%d/%d/%d is the earliest date",e_month, e_day, e_year);
            
            else if (month == e_month)
            {

                if (day <= e_day)
                    prinf("%d/%d/%d is the earliest date",e_month, e_day, e_year);
            }

        
    } 

    return 0;
}
