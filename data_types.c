#include <stdio.h>
#include <limits.h>
#include <stdint.h>

#define PRINT_TYPE_INFO(type, format) \
printf("%-20s | %20" format " | %20" format " | %20" format " | %20" format "\n", \
#type, \
(type)TYPE_MIN(type), \
(type)TYPE_MAX(type), \
LIMITS_MIN(type), \
LIMITS_MAX(type))

#define TYPE_MIN(type) ((type)1 << (sizeof(type) * 8 - 1))
#define TYPE_MAX(type) (~TYPE_MIN(type))
#define LIMITS_MIN(type) ((type)0 + TYPE_##type##_MIN)
#define LIMITS_MAX(type) ((type)0 + TYPE_##type##_MAX)

int main() {
    printf("%-20s | %20s | %20s | %20s | %20s\n", "Type", "Computed Min", "Computed Max", "Limits.h Min", "Limits.h Max");
    printf("----------------------------------------------------------------------------------------------------\n");

    PRINT_TYPE_INFO(char, "d");
    PRINT_TYPE_INFO(unsigned char, "u");
    PRINT_TYPE_INFO(short, "d");
    PRINT_TYPE_INFO(unsigned short, "u");
    PRINT_TYPE_INFO(int, "d");
    PRINT_TYPE_INFO(unsigned int, "u");
    PRINT_TYPE_INFO(long, "ld");
    PRINT_TYPE_INFO(unsigned long, "lu");

    return 0;
}