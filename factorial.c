#include <stdio.h>

int main()
{

    int n,i,factorial=1,k;
    
    for(k=0;1;++k){
        printf("Enter n: ");
        scanf("%d",&n);
        if(n>=0){
            break;
        }
    }
    
    
    for (i = 1; i <= n; ++i)
    {
        factorial = factorial*i;

    }
    
    

    printf("%d factorial is %d\n",n,factorial);




return 0;
}