//  created by Andrew Cooper, adapted from K&R C 2nd Ed.
//  Program prints one word per line

#include <stdio.h>

int main(int argc, char *argv[]){

    int character;
    
    while((character = getchar()) != EOF){
        if(character == ' '){
            putchar('\n');
        }else{
            putchar(character);
        }
    }
 
    
    return 0;
}
