#include <stdio.h>
#include <math.h>
//P1: sum of multiples of 3 or 5 under 1000.
int sum3Or5Sub1000() {
    int answerP1 = 0;
    for(int i = 1; i < 1000; i++) {
        if(i % 3 == 0 || i % 5 == 0) {
            answerP1 += i;
        }
    }
    printf("P1: %d\n", answerP1);
}

int sumEvenFibonacci() {
    int answerP2 = 0;
    int fibBefore = 1;
    int fibCurrent = 2;
    int temporary = 0;
    while(fibCurrent < 4000000) {
        if(fibCurrent % 2 == 0) {
            answerP2 += fibCurrent;
        }
        temporary = fibCurrent;
        fibCurrent += fibBefore;
        fibBefore = temporary;
    }
    printf("P2: %d", answerP2);
}

void main() {
    sum3Or5Sub1000(); //P1
    sumEvenFibonacci(); //P2
}