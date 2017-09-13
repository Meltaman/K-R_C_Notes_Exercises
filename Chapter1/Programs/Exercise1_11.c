//  from K&R C 2nd Ed.

/* Exercise is to test this program from K&R C and determine how to discover bugs
* The program counts words
*/
#include <stdio.h>
#define IN 1
#define OUT 0

int main(int argc, char *argv[]){
    
    int c, nl, nw, nc, state;
    
    state = OUT;
    nl = nw = nc = 0;
    while((c = getchar()) != EOF){
        ++nc;
        if(c == '\n')
            ++nl;
        if(c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if(state == OUT){
            state = IN;
            ++nw;
        }
    }
    printf("%d %d %d\n", nl, nw, nc);
    
    
    return 0;
}

/* potential tests could include: just \n, just \t, just ' '
 * regular strings of text
 * could also include invalid inputs like an open file
*/
