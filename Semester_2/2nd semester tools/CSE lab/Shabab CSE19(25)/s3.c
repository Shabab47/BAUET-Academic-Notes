#include<stdio.h>
int main()
{
    int a,b,sum,sub,mul,rem,c;
    float div;
    printf("Enter first value: ");
    scanf("%d",&a);
    printf("Enter second value: ");
    scanf("%d",&b);
    printf("What do you wanna do?\n");
    printf("Press\n 1 to Add\n 2 to Subtract\n 3 to Multiply\n 4 to Divide\n 5 for remainder\n");
    scanf("%d",&c);

    if(c==1)
    {sum=a+b;
        printf("Add: %d",sum);}
    else if(c==2)
    {sub=a-b;
        printf("Sub: %d",sub);}
    else if(c==3)
    {mul=a*b;
        printf("Mul: %d",mul);}
    else if(c==4)
    {div=(float)a/b;
        printf("Div: %.2f",div);}
    else if(c==5)
    {rem=a%b;
        printf("Remainder: %d",rem);}
}
