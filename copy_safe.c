/* 
 * Course: CSCI 222 - Computer Organization - Spring 2018
 * Instructor: Greg Schaper
 * Author: Thyago Mota and Greg Schaper
 * Description: Lab03 - copy_safe.c
 * TEAM MEMBERS: 
 */
 
#include <stdio.h>
#include <string.h>

// copies src to dst if there is room
int copy(char src[], char dst[], size_t size) {
    if(size - strlen(src) >= 0) {
        memcpy(dst, src, strlen(src) + 1);
        return 1;
    } 
    return 0;
}

const size_t SIZE = 10;

int main() {
    char src[] = "This is Q2 of Lab 03 - Computer Organization!";
    printf("src is a buffer of size %u\n", sizeof(src));
    
    char dst[SIZE]; 
    printf("dst is a buffer of size %u\n", sizeof(dst));
    if(copy(src, dst, SIZE)) 
        printf("Copy successful!\n");
    else
        printf("Not enough space to copy!\n");    
    return 0;
}
