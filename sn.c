#include <stdio.h>

int main()
{

    int n,i,sum=0,k;
    
    for(k=0;1;++k){
        printf("Enter n: ");
        scanf("%d",&n);
        if(n>=0){
            break;
        }
    }
    
    
    for (i = 1; i <= n; ++i)
    {
        sum = sum + i;

    }
    
    

    printf("The sum of first %d natural numbers is %d\n",n,sum);




return 0;
}