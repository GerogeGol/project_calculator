#include "convertion_expression.h"

#include "stdlib.h"


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

void format_line(char *buf, char *str)
{  // приводим строку к стандартному виду
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

void parsing(BinaryTree *tree, char *str)
{  // парсим данные и вносим в дерево
    char local_value[SIZE_VAR] = {'\0'};
    char var_name[SIZE_VAR] = {'\0'};
    double value;
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

