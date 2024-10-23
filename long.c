#include <stdio.h>

int main(){
    
    long int x;
    long long int y;
    long double z;

    printf("The size of long int is %zu bytes\n",sizeof(x));

    printf("The size of long long int is %zu bytes\n",sizeof(y));

    printf("The size of long double is %zu bytes\n",sizeof(z));


return 0;
}