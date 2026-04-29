#include <stdio.h>

int main() {
    FILE *fptr;
    char text[100];

    // Writing to file
    fptr = fopen("test.txt", "w");
    fprintf(fptr, "C Programming is powerful!");
    fclose(fptr);

    // Reading from file
    fptr = fopen("test.txt", "r");
    fgets(text, 100, fptr);
    printf("Data from file: %s", text);
    fclose(fptr);

    return 0;
}
