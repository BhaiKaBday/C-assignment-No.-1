#include <stdio.h>

int main()
{

    int x;
    printf("Enter a year: ");
    scanf("%d",&x);

    if(x%4 == 0){
        printf("The entered year %d is a leap year!\n",x);
    }
    else{
        printf("The entered year %d is not a leap year!\n",x);
    }
    




return 0;
}