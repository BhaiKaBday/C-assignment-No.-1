#include <stdio.h>


int main(){


    int n,m,larger,smaller,i,k,j,counter=0,flag= 0;

    for(k=0;1;k++){
        printf("Enter a number: ");
        scanf("%d",&n);
        if(n>=2){
            break;
        }
    }



        for(k=0;1;k++){
        printf("Enter another number: ");
        scanf("%d",&m);
        if(m>=2){
            break;
            }
        }
    larger = n;
    smaller =m;

    if(m>n){
        larger=m;
        smaller=n;


    }


    for(i=smaller;i<=larger;i++){
        counter = 0;
       for(j=2;j<i;j++){
       
        if(i%j==0){
            counter++;
            
        }
        
       }
       if(counter==0){
            printf("%d\n",i);
            flag++;
        } 

    }

    if (flag){
        printf("\nThere are %d primes from %d to %d",flag,smaller,larger);
    }
    else
    {
        printf("There are no primes from %d to %d",smaller,larger);
    }

   
    
    return 0;
}