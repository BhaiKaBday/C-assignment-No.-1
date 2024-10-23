#include <stdio.h>

int main()
{

    long long x;
    printf("Enter a number: ");
    scanf("%lld",&x);

    if(x>0){
        printf("The entered number %lld is positive\n",x);
    }else if (x<0)
    {
        printf("The entered number %lld is negative\n",x);
    }else{
        printf("The entered number is %lld",x);
    }
    




return 0;
}