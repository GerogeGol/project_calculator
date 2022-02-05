#include "convertion_expression.h"

#include "stdio.h"
#include "string.h"
#include "stdbool.h"
#include "stdlib.h"

#include "../variable_tree/variable_tree.h"

/*
Пусть Луна нам светит ярко
Обгоняем иномарку
Везу девочку-бунтарку
Я хотя бы не пешком
Нам даже звезды светят ярко
Нас догнала иномарка
Я прошу лишь не ломайся
Как российский автопром
*/

void format_line(char *buf, char *str) { // приводим строку к стандартному виду
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

void parsing(BinaryTree *tree, char *str, char *var_name, double value) { // парсим данные и вносим в дерево
    char local_value[SIZE_VAR];
    int i = 0;
    for (i = 0; str[i] != '='; ++i) {
        var_name[i] = str[i];
    }
    int k = 0;
    for (int j = i + 1; str[j] != '\0' && str[j] != '\n'; j++) {
        local_value[k] = str[j];
        ++k;
    }
    value = atof(local_value);
    AddElement2Tree(tree, var_name, value);
}

char *read_from_console(BinaryTree *tree) { // читаем консоль и отдаем строку для ОПН
    char buf[SIZE_STRING] = {'\0'};
    char exercise[SIZE_STRING] = {'\0'};

    bool scan_first_line = 0;
    while (gets(buf)) {
        if (scan_first_line) { // читаем первую строчку и готовим ее к ОПН
            format_line(buf, exercise);
            scan_first_line = 1;
        } else { // обрабатываем остальные строчки
            char str[SIZE_STRING] = {'\0'};
            format_line(buf, str);

            char var_name[SIZE_VAR];
            double value;
            parsing(tree, str, var_name, value);
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