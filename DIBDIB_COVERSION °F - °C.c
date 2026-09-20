#include <stdio.h>

int main() {
    // declare variables
    float celsius;
    float fahrenheit;
    //ask for input 
    printf("Temperature in Fahrenheit:");
    scanf ("%f" , &fahrenheit);
    printf ("Fahrenheit=%.2f",fahrenheit);
    //process 
    celsius = (fahrenheit - 32)* 5/9;
   // output: celsius
    printf("\nCelsius=%.2f", celsius);

    return 1;
}
