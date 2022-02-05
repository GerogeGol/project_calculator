#include "convertion_expression.h"

#include "stdio.h"
#include "string.h"

void formatFirstLine(char *buf, char *str) {
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

variable FillValues() {

}

char *ReadFromConsole() {
    char buf[SIZE_STRING] = {'\0'};
    char str[SIZE_STRING] = {'\0'};

    scanf("%s", &buf);
    formatFirstLine(buf, str);
}

char *ReadFromFile() {
    FILE *fr;
    fr = fopen("input.txt", "rt");

    char buf[SIZE_STRING] = {'\0'};
    while (fgets(buf, SIZE_STRING, fr)) {

    }
}
