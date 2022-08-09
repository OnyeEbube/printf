#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

#define NOT_USED(x) (void)(x)
#define BUFSIZE 1024

/* flags */
#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16

/* sizes */
#define LONG 2
#define SHORT 1

/**
 * struct fr_mt
 *
 * @fr_mt: the format
 * @fn: the function associated.
 */
struct fr_mt
{
  char fr_mt;
  int (*fn)(va_list, char[], int, int, int, int);
};

/**
 * typedef struct fr_mt fmt - Struct op
 *
 * @fr_mt: the format
 * @fmt: the function
 */
typedef struct fr_mt fmt;

 
int _printf(const char *format, ...);
int handle_print(const char *fmt, int *i,
va_list list, char buffer[], int flags, int width, int precision, int size);

/* FUNCTIONS */
int print_string(va_list list, char buf[], int flags, int width, int precision, int size);
void print_buf(char buf[], int *n);

int print_int(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_binary(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_unsigned(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_octal(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_hexadecimal(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_hexa_upper(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_hexa(va_list types, char map_to[],
  char buffer[], int flags, char flag_ch, int width, int precision, int size);
int print_non_printable(va_list types, char buffer[],
  int flags, int width, int precision, int size);
int print_pointer(va_list types, char buffer[],
	int flags, int width, int precision, int size);


int get_flags(const char *format, int *i);
int get_width(const char *format, int *i, va_list list);
int get_precision(const char *format, int *i, va_list list);
int get_size(const char *format, int *i);


int print_reverse(va_list types, char buffer[],
	int flags, int width, int precision, int size);


int print_rot13string(va_list types, char buffer[],
	int flags, int width, int precision, int size);


int handle_write_char(char c, char buffer[],
	int flags, int width, int precision, int size);
int write_number(int is_positive, int ind, char buffer[],
	int flags, int width, int precision, int size);
int write_num(int ind, char bff[], int flags, int width, int precision,
	int length, char padd, char extra_c);
int write_pointer(char buffer[], int ind, int length,
	int width, int flags, char padd, char extra_c, int padd_start);

int write_unsgnd(int is_negative, int ind,
char buffer[],
	int flags, int width, int precision, int size);


int is_printable(char);
int append_hexa_code(char, char[], int);
int is_digit(char);

long int convert_size_number(long int num, int size);
long int convert_size_unsgnd(unsigned long int num, int size);






#endif
