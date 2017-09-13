//  created by Andrew Cooper, adapted from K&R C 2nd Ed.
//  program verifies the value of EOF

#include <stdio.h>

int main(int argc, char *argv[]){
    
    int c;
    
    while ((c = getchar()) != EOF){
        printf("%d\t", c != EOF);
        putchar(c);
        printf("\n");
    }
    
    printf("%d\n", c != EOF);
    
    return 0;
    
}
