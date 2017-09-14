//  created by Andrew Cooper, adapted from K&R C 2nd Ed.
//  Program prints a histogram of the frequencies of characters in its input

#include <stdio.h>
#define MAX_CHARS 128 //    maximum number of ASCII chars

int main(int argc, char *argv[]){
    
    int character;
    int i;
    int j;
    int characters[MAX_CHARS];
    
    for(i = 0; i < MAX_CHARS; i++){
        characters[i] = 0;
    }
    
    while((character = getchar()) != EOF){
        characters[character] = characters[character] + 1;
    }
    
    for(i = 0; i < MAX_CHARS; i++){
        putchar(i);
        
        for(j = 0; j < characters[i]; j++){
            putchar('+');
        }
        putchar('\n');
    }
    
    
    return 0;
}
