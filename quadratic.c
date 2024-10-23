#include <stdio.h>
#include <math.h>


int main(){


    float a,b,c,m,n;
    printf("What is the coefficient of x^2?: ");
    scanf("%f",&a);

    printf("What is the coefficient of x?: ");
    scanf("%f",&b);

    printf("What is the coefficient c?: ");
    scanf("%f",&c);



    m = (-b + sqrt(b*b - 4*a*c))/2;
    n = (-b - sqrt(b*b - 4*a*c))/2;

    printf("The roots of the quadratic equation %fx^2 + %fx + %f are %f and %f",a,b,c,m,n);







    return 0;
}