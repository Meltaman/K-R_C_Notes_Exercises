//  created by Andrew Cooper, adapted from K&R C 2nd Ed.
//  program prints a table of Celsius temps and converts them to Fahrenheit
#include <stdio.h>

int main(int argc, char *argv[]){
    
    float fahr, celsius;
    int lower, upper, step;
    
    lower = 0;
    upper = 300;
    step = 20;
    
    celsius = lower;
    
    printf("**************************\n");
    printf("Celsius -> Fahrenheit Table\n");
    printf("**************************\n");
    
    while(celsius <= upper){
            fahr = (celsius * 9.0/5.0) + 32;
            printf("%3.0f %6.1f\n", celsius, fahr);
            celsius = celsius + step;
    }
    
    return 0;
}
