#include <stdio.h>
int main(){


    int x, i,y, digits=1;

    
    printf("Enter a number: ");
    
    scanf("%d",&x);
    y = x;
    for(i=1;i<=x;i++){
        x=x/10;

        if(x){
            ++digits;
        }
        else{
            break;
        }
    }

    printf("The entered number %d has %d digits",y,digits);
    

    return 0;
}