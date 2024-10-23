#include <stdio.h>

int main(){

    char w;

    printf("Enter a character: ",w);

    scanf("%c",&w);

    if((w=='a'||w=='e'||w=='i'||w=='o'||w=='u'||w=='A'||w=='E'||w=='I'||w=='O'||w=='U')){
        printf("%c is a vowel",w);
    }else{
        printf("%c is a consonant",w);

    }

    return 0;
}