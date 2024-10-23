#include <stdio.h>

int main(){


    float x,y,z, largest;
    printf("Enter a number: ");
    scanf("%f",&x);
    printf("Enter a number: ");
    scanf("%f",&y);
    printf("Enter a number: ");
    scanf("%f",&z);

    largest = x;

    if (x<y || x<z){
        if(z>y){
            largest = z;
        }
        else{
            largest = y;
        }
    }

    printf("The largest number among %f,%f and %f is %f",x,y,z,largest);



    return 0;
}