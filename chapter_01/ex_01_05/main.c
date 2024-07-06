/*
 * Exercise 1-5. Modify the temperature conversion program to print the table
 * in reverse order, that is, from 300 degrees to 0.
 *
 * Created by Akif AYDIN on 6.07.2024
 */

#include <stdio.h>


int main() {
    int fahr;

    printf("Fahrenheit\tCelsius\n");

    for (fahr = 300; fahr >= 0; fahr = fahr - 20) {
        printf("%10d %6.1f\n", fahr, (5.0f / 9.0) * (fahr - 32));

    }

    return 0;
}
