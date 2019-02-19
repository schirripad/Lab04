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
    uint digits = 1;
    int j = 0;
    for(uint i = 2; i <= n; i ++){
        for(j = 0; j < digits; j ++){
	    result[j] *= i;
	    result[j] = (result[j]+carry)%10;
	    carry = (result[j]+carry)/10;
	}
        while(carry > 0){
	   result[j++] = carry%10;
	   carry = carry / 10;
	   digits++;
	}
    }
    return digits;
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
