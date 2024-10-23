#include <stdio.h>

int main()
{

    int x,y,q,r;
    printf("Enter Dividend: ");
    scanf("%d",&x);
    printf("Enter Divisor: ");
    scanf("%d",&y);

    q = x/y;
    r = x%y;

    printf("The quotient is %d\n",q);
    printf("The remainder is %d\n",r);




return 0;
}