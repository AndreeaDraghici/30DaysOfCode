#include<stdio.h>
#include<stdlib.h>

int main()
{
    // Declare a variable named 'input_string' to hold our input.
    char input_string[105];
    // Read a full line of input and save it to our variable, input_string.
    gets(input_string);
    // Print a string literal saying "Hello, World." to using printf.
    printf("Hello, World.\n");
    // prints the contents of input_string.
    printf("%s", input_string);
    return 0;
}
