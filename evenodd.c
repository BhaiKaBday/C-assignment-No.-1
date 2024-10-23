#include <stdio.h>

int main()
{

    int x;
    printf("Enter a number: ");
    scanf("%d",&x);

    if(x%2 == 0){
        printf("The entered number %d is even\n",x);
    }
    else{
        printf("The entered number %d is odd\n",x);
    }
    




return 0;
}