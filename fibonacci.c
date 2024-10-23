#include <stdio.h>

int main(){
    int a=0,b=1,n,i,f=0,k;

    
for(k=0;1;k++){
        printf("How many fibonacci numbers?: ");
    scanf("%d",&n);
        if(n>=0){
            break;
        }
    }
   
    for(i=0;i<n;i++){
        if(i==1){
            printf("1\n");
            continue;

        }
        printf("%d\n",f);
        f = a+b;
        a = b;
        b = f;
    }








}