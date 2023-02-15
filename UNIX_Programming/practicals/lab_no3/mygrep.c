#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <ctype.h>

char *str_to_lowe(char *string)
{

    char *string_lower = malloc(strlen(string));

    for (int i = 0; i <= strlen(string); i++){
        string_lower[i] = tolower(string[i]);
    }
    return string_lower;
}

int main(int argc, char *argv[]){

    // Checking whether only 2 arguments where given
    if (argc > 3){
        printf("Too many arguments given! Please only use two");
        printf("Arguments provided: \n");

        for (int i = 1; i <= argc; i++){
            printf("%s \n", argv[i]);
        }
        return -1;
    }

    // Make keyword lower
    char *keyword_lower = str_to_lowe(argv[1]);

    // Start reading the file
    FILE *fp;
    char *line = NULL;
    size_t len = 0;
    ssize_t read;
    fp = fopen(argv[2], "r");

    while ((read = getline(&line, &len, fp)) != -1){

        if (strstr(str_to_lowe(line), keyword_lower)){
            printf(line);
        }
    }

    fclose(fp);
    return (0);
}