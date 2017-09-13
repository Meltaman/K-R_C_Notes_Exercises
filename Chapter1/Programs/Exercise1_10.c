//  created by Andrew Cooper, adapted from K&R C 2nd Ed.
//  program prints escape characters in place of actual spaces/tabs etc

#include <stdio.h>

int main(int argc, char *argv[]){
    
    int character;
    
    while ((character = getchar()) != EOF){
        switch(character){
            case '\t':
                putchar('\\');
                putchar('t');
                break;
            case '\b':
                putchar('\\');
                putchar('b');
                break;
            case '\\':
                putchar('\\');
                putchar('\\');
                break;
            default:
                putchar(character);
            
        }
    }
    
    
    return 0;
}
