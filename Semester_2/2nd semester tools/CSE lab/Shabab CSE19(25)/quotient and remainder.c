#include<stdio.h>
int main()
{
    int a,b;
    float q,r;
    printf("Enter 2 int values: ");
    scanf("%d %d",&a,&b);
    q=a/b;
    r=a%b;
    printf("Quotient= %.2f\n",q);
    printf("Remainder= %.2f",r);
}
