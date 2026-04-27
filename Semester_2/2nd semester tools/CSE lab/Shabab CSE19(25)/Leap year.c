#include<stdio.h>
int main()
{
    int t;
    printf("Enter year: ");
    scanf("%d",&t);
    if((t%4==0||t%100!=0)&&(t%400==0))
    {
        printf("It's a leap year.");
    }
    else{printf("It's not a leap year");};
}
