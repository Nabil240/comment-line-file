#include<stdio.h>
#include<string.h>

int main() {
    FILE* file;
    char nabil[10]; 
    char line[50];

    printf("Enter a File Name: ");
    scanf("%s", nabil);

    file = fopen(nabil, "r");  

    if (file == NULL) {
        printf("File Opening Error.\n");
        return 1;  // Return 1 on failure
    }

    int commentlines = 0;

    while (fgets(line, sizeof(line), file) != NULL) {
        if (line[0] == '/' && (line[1] == '/' || line[1] == '*')) {
            commentlines++;
        }
    }

    printf("Total Number Of Comment Lines: %d\n", commentlines);

    fclose(file);
    return 0;  
