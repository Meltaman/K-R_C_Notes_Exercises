//  created by Andrew Cooper, adapted from K&R C 2nd Ed.
//  program replaces multiple spaces with a singular space

#include <stdio.h>

int main(int argc, char *argv[]){
    
    int character;
    int last_character = 'a';
    
    while ((character = getchar()) != EOF){
        if(character == ' '){
            if(last_character != ' '){
                putchar(character);
            }
        }else{
            putchar(character);
        }
        last_character = character;
    }
    
    
    return 0;
}
