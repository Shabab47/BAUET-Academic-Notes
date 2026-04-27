#include<stdio.h>
int main()
{
    float p,c,m,t;
    printf("Enter mark of Physics: ");
    scanf("%f", &p);
    printf("Enter mark of Chemistry: ");
    scanf("%f", &c);
    printf("Enter mark of Math: ");
    scanf("%f", &m);

    t=(p+c+m)/3;
     if(t>=60)
     {
         printf("Average: %.2f\n", t);
         printf("Division: First");
     }
     else if(t>=50&&t<=59)
     {
         printf("Average: %.2f\n", t);
         printf("Division: Second");
     }
     else if(t>=40&&t<=49)
     {
         printf("Average: %.2f\n", t);
         printf("Division: Third");
     }
     else if(t<=39)
     {
         printf("Average: %.2f\n", t);
         printf("Division: Second");
     }
}
