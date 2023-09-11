#include <stdio.h>

int main() {
    int piEngineer = 3; // %d or %i
    float pi = 3.1415; // %f or %.nf (n is decimal precision)
    double piLong = 3.141592653589793; // %.nlf
    float diff1 = pi - piEngineer;
    double diff2 = piLong - pi;
    char theLetterD = 'D'; // %c
    printf("Engineers use pi as %d\n", piEngineer /* + 100 */); //note, you can actually manipulate the variable here.
    printf("It's actually closer to %.4f\n", pi);
    printf("The margin of error would be somewhere about %.4f\n", diff1);
    printf("But even then, that would still have a margin of error to this more approximate value of pi (%.15lf)\n", piLong);
    printf("That margin being %.15lf (floating point error?)\n", diff2); // floating point error?
    printf("So anyway, have a letter: %c\n\n", theLetterD);

    int a = 1, b = 2, c = 3;
    printf("the sum of %d, %d, and %d is %d\n", a, b, c, a + b + c);
    printf("%d / %d = %f, %d / %d = %f, %d / %d = %f\n", a, b, (float) a/b, b, c, (float) b/c, c, a, (float) c/a);
    //int to float conversion: 5 / 2 = 2 | (float) 5 / 2 = 2.500000
    return 0;
}