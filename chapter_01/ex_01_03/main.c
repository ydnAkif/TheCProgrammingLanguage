/*
 * Exercise 01-03. Modify the temperature conversion program to print a heading
 * above the table.
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

    fahr = lower;

    printf("Fahrenheit\tCelsius\n");

    while (fahr <= upper) {
        celsius = (5.0f / 9.0f) * (fahr - 32.0f);
        printf("%10.0f\t%7.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
    return 0;
}
