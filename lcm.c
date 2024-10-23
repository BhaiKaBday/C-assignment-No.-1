#include <stdio.h>


int main(){


    int x,y,larger,lcm=1,i;

    printf("Enter a number: ");
    scanf("%d",&x);

    printf("Enter another number: ");
    scanf("%d",&y);

    larger = y;

    if(x>y){
        larger = x;
    }

    for(i=larger;1;++i){
        if(i%x==0 && i%y==0){
            lcm = i;
            break;
        }

    }

    printf("The LCM of %d and %d is %d",x,y,lcm);
    return 0;
}