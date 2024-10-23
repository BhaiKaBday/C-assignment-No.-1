#include <stdio.h>


int main(){
    char c;

    printf("Enter something: ");
    scanf("%c",&c);
    
    if((c<91&&c>64) || (c>96&&c<123)){
        printf("%c is an alphabet",c);

    }else{
        printf("%c is not an alphabet",c);
    }


    return 0;
}