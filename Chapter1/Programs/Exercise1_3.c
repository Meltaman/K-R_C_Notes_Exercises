//  created by Andrew Cooper, adapted from K&R C 2nd Ed.
//  program converts a table of Fahrenheit temps and converts them to Celsius

#include <stdio.h>

int main(int argc, char *argv[]){
    
    float fahr, celsius;
    int lower, upper, step;
    
    lower = 0;
    upper = 300;
    step = 20;
    
    fahr = lower;
    
    printf("**************************\n");
    printf("Fahrenheit -> Celsius Table\n");
    printf("**************************\n");
    
    while(fahr <= upper){
            celsius = (5.0/9.0) * (fahr - 32.0);
            printf("%3.0f %6.1f\n", fahr, celsius);
            fahr = fahr + step;
    }
    
    return 0;
}
