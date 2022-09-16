//take user input and capitlize the letters
#include <stdio.h>

int main() {
    char input;
    printf("Please Enter a small letter Alphabet:");
    scanf("%c",&input);
    int x = input;
    //capitlize letter
    if(x<=122 && x>=97){
       x=x-32;
       printf("%c",x);
    }
    //Error if capital
    else if (x<=89 && x>=65){
       printf("Number already capital letter!!");
    }
    //Error if input
    else{
        printf("Please Enter an alphabet!!!");
    }

    return 0;
}