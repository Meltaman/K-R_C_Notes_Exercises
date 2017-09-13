//  created by Andrew Cooper, adapted from K&R C 2nd Ed.
//  program experiments with escape characters

#include <stdio.h>

int main(int argc, char *argv[]){
    printf("Hello World\n");
    
    printf("\x");   //    hex escape character to show output
        
    printf("Hello");
    printf("World");
    printf("\z");   //    random escape character to show output
    
    return 0;
}
