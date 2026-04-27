#include<stdio.h>
int main()
{
    int a;
    printf("Enter character: ");
    scanf("%c",&a);
    if((a>=65&&a<=90)||(a>=97&&a<=122))
    {printf("It's an Alphabet.");}
    else{printf("It's not an Alphabet.");}
}
