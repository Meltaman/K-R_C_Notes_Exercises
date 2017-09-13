//  created by Andrew Cooper, adapted from K&R C 2nd Ed.
//  program counts spaces, tabs, and newlines

#include <stdio.h>

int main(int argc, char *argv[]){
    
    int c;
    int space = 0;
    int new_line = 0;
    int tab = 0;
    
    
    while ((c = getchar()) != EOF){
        if(c == ' '){
            space++;
        }
        if(c == '\n'){
            new_line++;
        }
        if(c == '\t'){
            tab++;
        }
    }
    
    printf("\nThere are:\n %d spaces\n %d tabs\n %d newlines\n", space, tab, new_line);
    
    
    return 0;
}
