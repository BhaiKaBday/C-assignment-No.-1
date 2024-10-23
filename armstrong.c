#include <stdio.h>
#include <math.h>
int main(){


    int x, i,y,j,z, digits=1,arm=0,b=0;

    
    printf("Enter a number: ");
    
    scanf("%d",&x);
    y = x;

    for(j=1;j<=x;j++){
        x=x/10;

        if(x){
            digits++;
        }
        else{
            break;
        }
    }
 
    x =y;

    for(i=1;1;i++){
        b=x%10;
        x=x/10;
        z = (int)round(pow(b,digits));
        //printf("%d\n",z);
        arm = arm + z;
        // printf("%d\n",arm);

        if (x){
            continue;
        }else{
            break;
        }
        
    }
    //printf("%d\n",arm);
    if(arm==y){
        printf("The number %d is an armstrong number",y);
    
    }
    else{
        printf("The number %d is not an armstrong number",y);
    }
    

    return 0;
}