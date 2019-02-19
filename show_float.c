/* 
 * Course: CSCI 222 - Computer Organization - Spring 2018
 * Instructor: Greg Schaper
 * Author: Thyago Mota and Greg Schaper
 * Description: Lab03 - show_float.c
 * TEAM MEMBERS:
 */
 
#include <stdio.h>
#include <math.h>

// TODO: display the sign bit and the exponent and mantissa bits of f (passed as argument)
void show_float(float f) {
    printf("\n");    
}

int main() {
    printf("1/3.\t\t>> ");
    show_float(1/3.);       // 0 01111101 01010101010101010101011
    printf("3.75\t\t>> ");
    show_float(3.75);       // 0 10000000 11100000000000000000000
    printf("-3.75\t\t>> ");
    show_float(-3.75);      // 1 10000000 11100000000000000000000
    printf("M_PI\t\t>> ");
    show_float(M_PI);       // 0 10000000 10010010000111111011011
    printf("NAN\t\t>> ");
    show_float(NAN);        // 0 11111111 10000000000000000000000
    printf("INFINITY\t>> ");
    show_float(INFINITY);   // 0 11111111 00000000000000000000000
    printf("-INFINITY\t>> ");
    show_float(-INFINITY);  // 1 11111111 00000000000000000000000
    printf("0\t\t>> ");
    show_float(0);          // 0 00000000 00000000000000000000000
    printf("-0\t\t>>");     // this is not the actuall -0 (see question 4)
    show_float(-0);         // 0 00000000 00000000000000000000000
    return 0;
}
