#include <stdio.h>
int main(){


    int x, i,y, digits=1,rev=0,b=0;

    
    printf("Enter a number: ");
    
    scanf("%d",&x);
    y = x;
    for(i=1;i<=x;i++){
        b=x%10;
        x=x/10;
        rev = rev*10 + b;
        if(x){
            ++digits;
        }
        else{
            break;
        }
    }

    printf("The reverse of number %d is %d",y,rev);
    

    return 0;
}