#include <stdio.h>

int main()
{

    int x,y,a;
    printf("Enter x: ");
    scanf("%d",&x);
    printf("Enter y: ");
    scanf("%d",&y);

    a = x;
    x = y;
    y = a;



    printf("X is now %d\n",x);
    printf("Y is now %d",y);




return 0;
}