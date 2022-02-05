#include "convertion_expression.h"

#include "stdio.h"
#include "string.h"
#include "stdbool.h"

#include "../variable_tree/variable_tree.h"

void format_first_line(char *buf, char *exercise) {
    int j = 0;
    for (int i = 0; i < SIZE_STRING; ++i) {
        if (buf[i] == ' ') {
            continue;
        } else {
            exercise[j] = buf[i];
            ++j;
        }
    }
}

void format_variable_lines(char *buf, char *str){
    int j = 0;
    for (int i = 0; i < SIZE_STRING; ++i) {
        if (buf[i] == ' ') {
            continue;
        } else {
            str[j] = buf[i];
            ++j;
        }
    }

}

char *ReadFromConsole() {
    char buf[SIZE_STRING] = {'\0'};
    char exercise[SIZE_STRING] = {'\0'};

    bool scan_first_line = true;
    while (gets(buf)){
        if (scan_first_line){
            format_first_line(buf, exercise);
            scan_first_line = false;
        }
        else{
            char str[SIZE_STRING] = {'\0'};
            format_variable_lines(buf, str);
        }

    }
}

/*char *ReadFromFile() {
    FILE *fr;
    fr = fopen("input.txt", "rt");

    char buf[SIZE_STRING] = {'\0'};
    while (fgets(buf, SIZE_STRING, fr)) {

    }
}*/
