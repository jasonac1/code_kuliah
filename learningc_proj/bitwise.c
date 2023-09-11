#include <stdio.h>
int main() {
    int a = 11; int b = 5;
    printf("%d & %d = %d\n", a, b, a & b);
    printf("%d | %d = %d\n", a, b, a | b);
    printf("%d ^ %d = %d\n", a, b, a ^ b);
    printf("~a = %d\n", ~a);
    printf("~b = %d\n", ~b);
    printf("a >> 1 = %d\n", a >> 1);
    printf("b >> 1 = %d\n", b >> 1);
    printf("a << 1 = %d\n", a << 1);
    printf("b << 1 = %d\n", b << 1);

    return 0;

    //explanation
    /* 
    1011 (11d)
    0101 (5d)
    ----- AND (&)
    0001 (1d)

    1011
    0101
    ----- OR (|)
    1111 (15d)

    1011
    0101
    ----- XOR (^)
    1110 (14d)

    SIGNED (8-bit) BINARY:
    FIRST DIGIT INDICATES SIGN. 0 = POSITIVE, 1 = NEGATIVE, so
    ~00001011  
    ----- NOT (~)
    11110100

    the first digit is the negative sign, but it also has a value of 128, so it becomes -128.
    -1(128) + 1(64) + 1(32) + 1(16) + 0(8) + 1(4) + 0(2) + 0(1)
    = -12.

    ~00000101
    ----- NOT (~)
    11111010 (10d)
    -128 + 64 + 32 + 16 + 8 + 2
    = -6

    1011
    ----- a >> 1
    0101(1) - the 1 gets cut
    = 5d

    0101
    ----- b >> 1
    0010(1)
    = 2d

    (0)1011
    ----- a << 1
    10110 (it shifts to the left)
    = 22d

    (0)0101
    ----- b << 1
    01010
    = 10d
    */
}