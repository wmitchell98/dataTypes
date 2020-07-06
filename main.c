#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";


    // Declare second integer, double, and String variables.
    int integer;
    double double_val;
    char string[100];


    // Read and save an integer, double, and String to your variables.
    scanf("%d", &integer);
    scanf("%lf", &double_val);
    scanf("%*[\n] %[^\n]", string);
    // Print the sum of both integer variables on a new line.
    integer = integer + i;
    printf("%d\n", integer);
    // Print the sum of the double variables on a new line.
    double_val = double_val + d;
    printf("%.1f\n", double_val);
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    printf("%s%s\n",s, string);

 
    return 0;
