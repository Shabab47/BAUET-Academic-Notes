//14
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a value: ");
    scanf("%d",&n);
    printf("Factors are: ");
    int i=1;
    while(i<=n)
    {
        if(n%i==0)
        {
            printf("%d ", i);
        }
        i++;
    }
}
