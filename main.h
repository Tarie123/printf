#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int binary(int num);
int octal(int num);
int printf_decimal_specifier(va_list argumenst); 

#endif