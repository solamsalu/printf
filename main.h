#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

<<<<<<< HEAD
#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024

/* FLAGS */
#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16

/* SIZES */
#define S_LONG 2
#define S_SHORT 1

/* Funtions to print chars and strings */

int print_char(va_list types, char buffer[],
		int flags, int width, int precision, int size);
int print_string(va_list types, char buffer[],
		int flags, int width, int precision, int size);
int print_percent(va_list types, char buffer[],
		int flags, int width, int precision, int size);


/* Functions to print numbers */

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
		char buffer[], int flags, char flag_ch, int width,
		int precision, int size);

/* Function to print non printable characters */

int print_non_printable(va_list types, char buffer[],
		int flags, int width, int precision, int size);

/* Funcion to print memory address */

int print_pointer(va_list types, char buffer[],
		int flags, int width, int precision, int size);

/* Funciotns to handle other specifiers */

int get_flags(const char *format, int *i);
int get_width(const char *format, int *i, va_list list);
int get_precision(const char *format, int *i, va_list list);
int get_size(const char *format, int *i);

/*Function to print string in reverse*/

int print_reverse(va_list types, char buffer[],
		int flags, int width, int precision, int size);

/*Function to print a string in rot 13*/

int print_rot13string(va_list types, char buffer[],
		int flags, int width, int precision, int size);

/* width handler */

int handle_write_char(char c, char buffer[],
		int flags, int width, int precision, int size);
int write_number(int is_positive, int ind, char buffer[],
		int flags, int width, int precision, int size);
int write_num(int ind, char bff[], int flags, int width, int precision,
		int length, char padd, char extra_c);
int write_pointer(char buffer[], int ind, int length,
		int width, int flags, char padd, char extra_c, int padd_start);
int write_unsgnd(int is_negative, int ind, char buffer[],
		int flags, int width, int precision, int size);

/* utils.c */
int _strlen(const char *);
int print(char *);
char *itoa(long int, int);

/* printf.c */
int _printf(const char *, ...);

/* handler.c */
int handler(const char *, va_list);
int percent_handler(const char *, va_list, int *);

/* _putchar.c */
int _putchar(char);
int buffer(char);

/**
 * struct fmt - Struct op
 * @fmt: The format
 * @fn: The function associated.
 */

struct fmt

{
	char fmt;
	int (*fn)(va_list, char[], int, int, int, int);
};

/*
 * typedef struct fmt fmt_t - Struct op
 * @fmt: The format
 * @fm_t: The function associated.
 */
typedef struct fmt fmt_t;
=======
int _putchar(char c);
int print_int(va_list arg);
int print_unsigned(va_list arg);
int _printf(const char *format, ...);
int print_char(va_list arg);
int print_str(va_list arg);
int print_percent(void);
void print_binary(unsigned int n, unsigned int* printed);
int print_unsignedToBinary(va_list arg);
int print_oct(va_list arg);
int print_unsignedIntToHex(unsigned int num, char _case);
int print_hex_base(va_list arg, char _case);
int print_hex(va_list arg);
int print_HEX(va_list arg);
int print_STR (va_list arg);

/**
 * struct identifierStruct - structure definition of a printTypeStruct
 * @indentifier: type
 * @printer: function to print
 */
typedef struct identifierStruct
{
char *indentifier;
int (*printer)(va_list);
} identifierStruct;
>>>>>>> 485877da3468c23e81acc6c0f75221501b881153

int _printf(const char *format, ...);
int handle_print(const char *fmt, int *i,
		va_list list, char buffer[], int flags, int width,
		int precision, int size);
#endif
