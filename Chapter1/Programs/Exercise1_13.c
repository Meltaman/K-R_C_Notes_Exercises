//  created by Andrew Cooper, adapted from K&R C 2nd Ed.
//  Program creates horizontal histogram representing the lengths of each word in the input

#include <stdio.h>

int main(int argc, char *argv[]){

    int character;
    
    while((character = getchar()) != EOF){
        if(character == ' ' || character == '\t' || character == '\n'){
            putchar('\n');
        }else{
            putchar('+');
        }
        
    }
    
    return 0;
}
