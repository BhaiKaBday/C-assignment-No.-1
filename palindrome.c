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

    if(rev==y){
        printf("The number %d is a palindrome",y);
    
    }
    else{
        printf("The number %d is not a palindrome",y);
    }
    

    return 0;
}