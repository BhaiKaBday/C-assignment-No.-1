#include <stdio.h>

int main()
{

    int x,n,m=0,i;

    printf("Enter a number: ");
    scanf("%d",&x);

    for(m=0;1;++m){
        printf("How many multiples do you want?: ");
        scanf("%d",&n);
        if(n>=1){
            break;
        }
    }

    for (i=1;i<=n;++i)
    {
        printf("%d times %d is %d\n",x,i,x*i);
    }




return 0;
}