#include <stdio.h>

int main()
{

    float x,n,m,i,power=1;

   

    
    printf("Enter a number: ");
    scanf("%f",&x);


    printf("Raise to what power: ");
    scanf("%f",&n);
    

    m=n;

    if(n>0)
    {
    for (i = 1; i <= n; ++i)
    {
        power = power*x;
        

    }
    printf("%f to the power %f is %f\n",x,m,power);
    } 
    else if (n<0)
    {
        n = n - 2*n;
        for (i = 1; i <= n; ++i)
    {
        power = power/x;

    }
        printf("%f to the power %f is %f\n",x,m,power);  
    }
    else
    {
        printf("%f to the power %f is %f\n",x,m,power);
    }
    
    

   




return 0;
}