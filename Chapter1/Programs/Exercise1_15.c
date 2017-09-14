//  created by Andrew Cooper, adapted from K&R C 2nd Ed.
//  program prints and converts tables from one temperature unit to another in reverse

#include <stdio.h>

float fahrenheit_to_celsius(int f_temp);
float celsius_to_fahrenheit(int c_temp);

int main(int argc, char *argv[]){
    
    float fahr, celsius;
    int lower, upper, step;
    
    lower = 0;
    upper = 300;
    step = 20;
    
    printf("**************************\n");
    printf("Fahrenheit -> Celsius Table\n");
    printf("**************************\n");
    
    for(fahr = upper; fahr > lower; fahr = fahr - step){
            //celsius = (5.0/9.0) * (fahr - 32.0);
            printf("%3.0f %6.1f\n", fahr, fahrenheit_to_celsius(fahr));
    }
    
    lower = 0;
    upper = 300;
    step = 20;
    
    celsius = lower;
    
    printf("**************************\n");
    printf("Celsius -> Fahrenheit Table\n");
    printf("**************************\n");
    
    while(celsius <= upper){
            //fahr = (celsius * 9.0/5.0) + 32;
            printf("%3.0f %6.1f\n", celsius, celsius_to_fahrenheit(celsius));
            celsius = celsius + step;
    }
    
    return 0;
}

float fahrenheit_to_celsius(int f_temp){
    return (5.0/9.0) * (f_temp - 32.0);
}

float celsius_to_fahrenheit(int c_temp){
    return (c_temp * 9.0/5.0) + 32;
}

