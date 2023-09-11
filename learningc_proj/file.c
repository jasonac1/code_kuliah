#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE* test;
    char line[100];
    test = fopen("test.txt", "w");
    fprintf(test, "%s", "Hjdow\nwdwdE\nLdwdwd\nLdwdw\nOdacfjesifhisehfisheifhsheifhis");
    fclose(test);

    test = fopen("test.txt", "r");
    printf("File contains \n");
    //reads per line fjiosenfioje fjios eofs eoif jsoief ef
    while(fgets(line, 100, test) != NULL) { //idk why the LMS source cited null as the error value, why is it not NULL?
        printf("%s", line); //MY BRAIN NEEDS TO PAY MORE ATTENTION WHY DID I WRITE THIS AS FPRINTF NO WONDER WHY IT DIDNT WORK
    }
    fclose(test);
    return 0;

    //check out the documentation for syntax
}