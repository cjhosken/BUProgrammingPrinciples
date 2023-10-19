#include <stdio.h>

int promptYear(void);           /* asks for a year and returns the year number read frokm the standard input */
int leapYear(int);              /* return true (1) if the year passed in as a parameter is a leap year */
void computus(int);             /* procedure for calculating the date of Easter in a given year */
int findWeekday(int, int, int); /* return the day of the week for a given date as a number between 0 (Sunday) and 6 (Saturday) */

int cDay = 0, cMonth = 0; /* global variable to hold the result for the Easter day calculation */

int main(void)
{
        int year = 0;

        year = promptYear();

        computus(year);

        printf("Easter day %04d, the %02d/%02d/%02d is a ", year, cDay, cMonth, year);
        switch (findWeekday(cDay, cMonth, year))
        {
        case 0:
                printf("Sunday");
                break;
        case 1:
                printf("Monday");
                break;
        case 2:
                printf("Tuesday");
                break;
        case 3:
                printf("Wednesday");
                break;
        case 4:
                printf("Thursday");
                break;
        case 5:
                printf("Friday");
                break;
        case 6:
                printf("Saturday");
                break;
        }
        printf(".\n");

        return 0;
}

int promptYear(void)
{
        int y = 0;
        /* prompt for a year */
        printf("Year: "); /* request year as input   */
        scanf("%d", &y);  /* accept/read year “y” */
        fflush(stdin);

        return y;
}

void computus(int year)
{
        /* do computus */

        cDay = 0;   /* assign the correct day here */
        cMonth = 0; /* assign the correct month here */

        /* declare any other variables that are required - as good practice, initialize all of these to 0 */

        int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, h = 0, i = 0, k = 0, l = 0, m = 0;

        /* add operations that are required */
        a = year % 19;
        b = year / 100;
        c = year % 100;
        d = b / 4;
        e = b % 4;
        f = (b + 8) / 25;
        g = (b - f + 1) / 3;
        h = (19 * a + b - d - g + 15) % 30;
        i = c / 4;
        k = c % 4;
        l = (32 + 2 * e + 2 * i - h - k) % 7;
        m = (a + 11 * h + 22 * l) / 451;

        /* add the final two calculations to identify the correct day and month */
        cMonth = (h + l - 7 * m + 114) / 31;
        cDay = ((h + l - 7 * m + 114) % 31) + 1;

        /* output the final result */
        printf("The date for Easter in %4d is %02d/%02d/%04d.\n", year, cDay, cMonth, year); /* this prints out the result */

        /* no return is necessary */
}

int findWeekday(int day, int month, int year)
{
        int weekday = 0; /* variable for storing the weekday */
        
        /* do calculation */

        // FOR PREVIOUS YEARS
        for (int y = 1753; y < year; y++) {
                weekday += 365 + leapYear(y);
        }

        // FOR CURRENT YEAR

        for (int m = 1; m < month; m++) {
                switch (m) {
                        case 2: weekday += 28 + leapYear(year);
                                break;
                        case 4: 
                        case 6: 
                        case 9:
                        case 11: weekday += 30;
                                break;

                        default: weekday += 31;
                }
        }
        
        weekday += day;

        return weekday % 7;
}

int leapYear(int year)
{
        int isLeapYear = 0; /* variable to hold the truth value (0 or 1) for the given year */

        /* do calculation */
        if (year % 4 == 0) /* common element: divisible by 4 */
        {                  /* first test if the Julian calendar applies */
                if (year <= 1582)
                        isLeapYear = 1; /* yes */
                else              /* now check the Gregorian calendar rules */
                {
                        if (year % 100 == 0)
                        {
                                if (year % 400 == 0)
                                        isLeapYear = 1; /* yes */
                                else
                                        isLeapYear = 0; /* no  */
                        }
                        else
                                isLeapYear = 1; /* yes */
                }
        }
        else
                isLeapYear = 0; /* no  */

        return isLeapYear;
}