/*
 * Exercise 1-4. Write a program to print the corresponding Celsius to
 * Fahrenheit table.
 *
 * Created by Akif AYDIN on 6.07.2024
 */

#include <stdio.h>


int main() {
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;        /* lower limit of temperature scale */
    upper = 300;      /* upper limit */
    step = 20;       /* step size */

    celsius = lower;

    printf("Celsius\t\t\tFahrenheit\n");

    while (celsius <= upper) {
        fahr = (celsius) * (9.0f / 5.0f) + 32.0f;
        printf("%7.0f\t%18.0f\n", celsius, fahr);
        celsius = celsius + step;
    }
    return 0;
}
