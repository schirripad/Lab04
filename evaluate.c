/* 
 * Course: CSCI 222 - Computer Organization - Spring 2018
 * Instructor: Greg Schaper
 * Author: Thyago Mota and Greg Schaper
 * Description: Lab03 - factorial.c
 * TEAM MEMBERS: 
 */

#include <stdio.h>
#include <math.h>

typedef unsigned int uint;
typedef unsigned char uchar;

uint MAX_DIGITS = 100;

/* prints an array of char with size */
void display_array(uchar result[], uint size) {
  for(int i = (int)(size - 1); i >= 0; i--)
        printf("%d", result[i]);
    printf("\n");
}

/* TODO: computes the factorial of n, storing its digits in an array of char (result) and returning the number of digits (of the array) */
uint factorial(uint n, uchar result[]) {
    result[0] = 1;
    uint carry = 0;
    for(uint i = 1; i < n; i ++){
        for(uint j = 0; j < 100; j ++){
	    result[j] *= i;
	    result[j] += carry;
	    if(result[j] > 9){
	       carry = result[j] / 10;
	       result[j] %= 10;
	    }
	}
    }
    for (int i = MAX_DIGITS - 1; i >= 0; i --)
    {
       if (result[i] != 0)
           return i + 1;
    }
    return 0;
}

int main() {
    uint n, digits;

    //n = 13; // n! = 6227020800
    for(int n = 0; n < 16; n ++){
       uchar result[MAX_DIGITS];
       digits = factorial(n, result);
       printf("%d! = ", n);
       display_array(result, digits);
    }
    return 0;
}
