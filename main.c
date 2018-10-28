//Luis Ignacio Acosta Zamora A01411895
/*
 * Write a function in C to find the lenght of a string without using the standard library function (strlen).
 */

#include <stdio.h>

//This function goes through all a string until it finds the null character of ascii.
void stringLength(char string[]){
    int count = 0;

    while (string[count] != '\0') {
        count++;
    }
    printf("This string has a total of %d characters.",count-1);
}

int main() {
    //Create a string with a fix number of characters.
    char string[1000];

    //Request the user a string and save it using the fgets function to avoid errors.
    printf("Please write anything(note that spaces count as characters):\n");
    fgets(string, sizeof(string), stdin);

    stringLength(string);

    return 0;
}