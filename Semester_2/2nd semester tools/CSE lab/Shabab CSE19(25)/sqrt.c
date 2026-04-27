#include<stdio.h>
#include<math.h>
int main()
{
  float a,b,c;
  printf("Enter the value of a,b,c for equation (ax^2+bx+c=0) :  ");
  scanf("%f %f %f",&a,&b,&c);
  printf("Roots of the equation: x=%.2f or %.2f",(-b+sqrt(b*b-4*a*c))/(2*a),(-b-sqrt(b*b-4*a*c))/(2*a));
}




