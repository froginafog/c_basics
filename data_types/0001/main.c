/*
char 	        1 byte 	                            -128 to 127 or 0 to 255
unsigned char 	1 byte                              0 to 255
signed char 	1 byte 	                            -128 to 127
int 	        2 or 4 bytes 	                    -32,768 to 32,767 or -2,147,483,648 to 2,147,483,647
unsigned int 	2 or 4 bytes 	                    0 to 65,535 or 0 to 4,294,967,295
short         	2 bytes 	                        -32,768 to 32,767
unsigned short 	2 bytes 	                        0 to 65,535
long 	        8 bytes or (4bytes for 32 bit OS) 	-9223372036854775808 to 9223372036854775807
unsigned long 	8 bytes 	                        0 to 18446744073709551615
*/

/*
float 	      4 byte 	1.2E-38 to 3.4E+38 	    6 decimal places
double 	      8 byte 	2.3E-308 to 1.7E+308 	15 decimal places
long double   10 byte 	3.4E-4932 to 1.1E+4932 	19 decimal places
*/

#include <stdio.h>
#include <limits.h>

int main()
{
    printf("CHAR_BIT : %d\n", CHAR_BIT);
    printf("CHAR_MAX : %d\n", CHAR_MAX);
    printf("CHAR_MIN : %d\n", CHAR_MIN);
    printf("INT_MAX  : %d\n", INT_MAX);
    printf("INT_MIN  : %d\n", INT_MIN);
    printf("LONG_MAX : %ld\n", (long) LONG_MAX);
    printf("LONG_MIN : %ld\n", (long) LONG_MIN);
    printf("SCHAR_MAX: %d\n", SCHAR_MAX);
    printf("SCHAR_MIN: %d\n", SCHAR_MIN);
    printf("SHRT_MAX : %d\n", SHRT_MAX);
    printf("SHRT_MIN : %d\n", SHRT_MIN);
    printf("UCHAR_MAX: %d\n", UCHAR_MAX);
    printf("UINT_MAX : %u\n", (unsigned int) UINT_MAX);
    printf("ULONG_MAX: %lu\n", (unsigned long) ULONG_MAX);
    printf("USHRT_MAX: %d\n", (unsigned short) USHRT_MAX);

    return 0;
}

/*
CHAR_BIT : 8
CHAR_MAX : 127
CHAR_MIN : -128
INT_MAX  : 2147483647
INT_MIN  : -2147483648
LONG_MAX : 2147483647
LONG_MIN : -2147483648
SCHAR_MAX: 127
SCHAR_MIN: -128
SHRT_MAX : 32767
SHRT_MIN : -32768
UCHAR_MAX: 255
UINT_MAX : 4294967295
ULONG_MAX: 4294967295
USHRT_MAX: 65535
*/
