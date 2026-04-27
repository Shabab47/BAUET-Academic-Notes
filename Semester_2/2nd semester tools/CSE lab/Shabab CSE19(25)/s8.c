//12
#include<stdio.h>
int main()
{
    int n,factorial=1;
    printf("Enter value to perform factorial: ");
    scanf("%d",&n);
    if(n==0)
        printf("0");
    else if(n==1)
    {
        printf("1");
    }
    else{
        while(n!=0)
        {
            factorial=factorial*n;
            n--;
        }
        printf("Factorial= %d", factorial);
    }
}
