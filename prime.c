#include <stdio.h>


int main(){


    int n,i,counter,k;

    for(k=0;1;k++){
        printf("Enter a number: ");
        scanf("%d",&n);
        if(n>=2){
            break;
        }
    }
    for(i=2;i<n;i++){
        if(n%i==0){
            counter++;

        }

    }

    if (counter){
        printf("The number %d is not prime",n);
    }
    else
    {
        printf("The number %d is prime",n);
    }

   
    
    return 0;
}