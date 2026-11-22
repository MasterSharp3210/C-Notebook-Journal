#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <float.h>
#include <windows.h>


int main() {

    // Difference beetween signed and unsigned integers: 
    // signed = + or - values, unsigned = only + values

    int maxvalue_INT = INT_MAX; // Normal int = 16 bit
    unsigned int maxvalue_UINT = UINT_MAX; // Unsigned int = 16 bit
    long maxvalue_LONG = LONG_MAX; // Long = 32 bit
    long long maxvalue_LLONG = LLONG_MAX; // Long long = 64 bit
    unsigned long maxvalue_ULONG = ULONG_MAX; // Unsigned long = 32 bit
    unsigned long long maxvalue_ULLONG = ULLONG_MAX; // Unsigned long long = 64 bit

    float maxvalue_FLOAT = FLT_MAX; // Float = 32 bit
    double maxvalue_DOUBLE = DBL_MAX; // Double = 64 bit
    long double maxvalue_LDOUBLE = LDBL_MAX; // Long double = 64 bit

    DWORD maxvalue_DWORD = 0xFFFFFFFF; // DWORD = 32 bit (same as unsigned long, alias only for Windows, used for Windows API functions in hexadecimal format)


    // Different types of characters:
    // signed = -128 to +127, unsigned = 0 to +255

    char maxvalue_CHAR = CHAR_MAX; // Char = 8 bit
    unsigned char maxvalue_UCHAR = UCHAR_MAX; // Unsigned char = 8 bit

    return 0;
}