#include<stdio.h>
int main()
{
    int year;
    int y1,y2;

    printf("Enter the year:");
    scanf("%d", &year);

    if((year % 4 == 0 && year % 100 != 0) || (year % 400==0))
        {printf("%d is a leap year.",year);}
    else
    {printf("%d is not a leap year.\n", year);

        if(((year+1)%4 == 0 && (year+1)%100 != 0) || ((year+1)%400==0))
            {y1=year+1;}
         if(((year-1)%4 == 0 && (year-1)%100 != 0) || ((year-1)%400==0))
         {y2 =year-1;}
        if(((year+2)%4 == 0 && (year+2)%100 != 0) || ((year+2)%400==0))
        {y1=year +2;}
        if(((year-2)%4 == 0 && (year-2)%100 != 0) || ((year-2)%400==0))
        {y2=year-2;}
        if(((year+3)%4 == 0 && (year+3)%100 != 0) || ((year+3)%400==0))
        {y1=year+3;}
        if(((year-3)%4 == 0 && (year-3)%100 != 0) || ((year-3)%400==0))
        {y2=year-3;}
        if(((year+4)%4 == 0 && (year+4)%100 != 0) || ((year+4)%400==0))
        {y1 =year+4;}
        if(((year-4)%4 == 0 && (year-4)%100 != 0) || ((year-4)%400==0))
        {y2=year-4;}

    if((y1-year)==(year-y2))
        {printf("The nearest leap year is %d and %d.\n", y1,y2);}
    else if((y1-year)>(year-y2))
    {printf("The nearest leap year is %d.\n", y2);}
    else if((y1-year)<(year-y2))
    {printf("The nearest leap year is %d.\n", y1);}
    }
}
