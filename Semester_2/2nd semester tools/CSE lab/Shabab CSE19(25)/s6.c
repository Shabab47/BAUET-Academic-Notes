#include<stdio.h>
int main()
{
    int x,n,s=0;
    printf("Enter first value: ");
    scanf("%d", &x);
    printf("Enter last value: ");
    scanf("%d", &n);
    while(x<=n)
    {
         s=s+x;
         x++;

    }
    printf("Sum= %d",s);
}

