/*
 * main.c
 *
 *  Created on: 4/12/2021
 *      Author: Paulo Almeida
 */

#include "libc/compiler/freestanding.h"
#include "libc/unistd.h"

//static void write_string(const char *string)
//{
//    volatile char *video = (volatile char*) 0xb8000;
//    while (*string != 0)
//    {
//        *video++ = *string++;
//        *video++ = 2; //green
//    }
//}

void umain(void) {
    write("Hello from user space", 22);
    write("Fuck yeah!", 11);

//    char c[2];
//    c[0] = ret + 48;
//    c[1] = '\0';
//    write_string(c);
    while(true);
}

