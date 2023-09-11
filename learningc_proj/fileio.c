#include <stdio.h>
int main() {
    FILE *input_ptr; 
    FILE *output_ptr;
    char ch; 
    char *input_filename;
    char *output_filename;

    //we allocate memory for the files?
    input_filename = char[100];
    output_filename = char[100];

    printf("Enter the input file name: \n");
    scanf("%s", input_filename);
    printf("Enter the output file name: \n");
    scanf("%s", output_filename);

    input_ptr = fopen(input_filename, "r"); // this is how you point to any file (using a variable for the name of a file)
    output_ptr = fopen(output_filename, "w");
    
    //if file(s) can't be read
    if(input_ptr == NULL || output_ptr == NULL) {
        printf("Couldn't read one of or both files. \n");
        return;
    }

    while(!feof(input_ptr)) {
        fscanf(input_ptr, "%c", &ch);
        fprintf(output_ptr, "%c", ch);
    }

    //good practice
    /*fflush(output_ptr);

    //don't forget to close
    fclose(input_ptr);
    fclose(output_ptr);

    //delete the allocated
    delete [] input_filename;
    delete [] output_filename;

    */
    return 0;
}

/* Turns out you need C++ for new and delete*/