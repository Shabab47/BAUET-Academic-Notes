#include<stdio.h>
int main()
{
    int a,b,c;
    printf("A= ");
    scanf("%d", &a);
    printf("B= ");
    scanf("%d", &b);
    c=a;
    a=b;
    b=c;
    printf("Swap A= %d, swap B= %d",a,b);
}
