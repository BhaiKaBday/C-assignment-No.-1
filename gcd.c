#include <stdio.h>


int main(){


    int x,y,smaller,gcd=1,i;

    printf("Enter a number: ");
    scanf("%d",&x);

    printf("Enter another number: ");
    scanf("%d",&y);

    smaller = y;

    if(y>x){
        smaller = x;
    }

    for(i=2;i<=smaller;++i){
        if(x%i==0 && y%i==0){
            gcd = i;
        }

    }

    printf("The GCD of %d and %d is %d",x,y,gcd);
    return 0;
}