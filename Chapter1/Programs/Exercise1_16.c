//  created by Andrew Cooper, adapted from K&R C 2nd Ed.
//  program prints the length of arbitrarily long input lines and the text of the line

#include <stdio.h>
#define MAXLINE 1000

int newgetline(char s[], int lim);
void copy(char to[], char from[]);


int main(int argc, char *argv[]){
    
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];
    
    max = 0;
    
    while((len = newgetline(line, MAXLINE)) > 0){
        printf("Line length: %d \tLine text: %s\n", len, line); 

    }

    
    return 0;
}


int newgetline(char s[], int lim){
    int c, i;
    
    for(i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i){
        s[i] = c;
    }
    if(c == '\n'){
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}


void copy(char to[], char from[]){
    int i;
    
    i = 0;
    
    while((to[i] = from[i]) != '\0'){
        ++i;
    }
}
