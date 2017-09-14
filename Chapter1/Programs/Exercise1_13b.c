//  created by Andrew Cooper, adapted from K&R C 2nd Ed.
//  Program creates vertical histogram representing the lengths of each word in the input

#include <stdio.h>
#define CHARACTER_MAX 15
#define WORD_MAX 25 

int main(int argc, char *argv[]){

    int num_words[WORD_MAX]; 
    int character;
    int i;
    int j;
    int char_counter = 0;
    int word_counter = 0;
    
    for(i = 0; i < WORD_MAX; i++);{
        num_words[i] = 0;
    }
    
    while((character = getchar()) != EOF){
        char_counter++;
        if(character == ' ' || character == '\t' || character == '\n'){
            num_words[word_counter] = char_counter - 1;
            word_counter++;
            char_counter = 0;
        }
   
    }
    
    for(i = CHARACTER_MAX; i > 0; i--){
        for(j = 0; j < word_counter; j++){
           
            if(i <= num_words[j]){
                putchar('+');
            }else{
                putchar(' ');
            }
        }
        putchar('\n');
    }
    return 0;
}
