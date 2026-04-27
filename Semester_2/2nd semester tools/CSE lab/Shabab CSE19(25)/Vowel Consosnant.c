#include<stdio.h>
int main()
{
    char _a;
    printf("Enter letter= ");
    scanf("%c",&_a);
    if(_a==65||_a==69||_a==73||_a==79||_a==85||_a==97||_a==101||_a==105||_a==111||_a==117)
    {
        printf("It's a vowel");
    }
    else
        {printf("It's a consonant");};

}
