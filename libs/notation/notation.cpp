#include "notation.h"

#include "stdio.h"
#include "stdlib.h"
#include "string.h"

#define N 100
// to_notation функция, принимающая строку-пример и возвращающая стек с обратной польской записью
Stack to_notation(char ex[])
{
    Stack st;
    char temp[N] = {0};
    int number_mode = 0;
    // number_mode нужна, поскольку числа могут содержать больше одной цифры. если 0, значит число уже передано в стек
    for (int i = 0; ex[i] != '\0'; i++) {
        if (number_mode == 0)
            to_zero(temp);
        if (ex[i] == '(') {
            strcpy(temp, "(");
            AddELement2Stack(&st, temp);
        } else if (ex[i] >= '0' && ex[i] <= '9') {
            add_to_string(temp, ex[i]);
            if (ex[i + 1] > '0' && ex[i] <= '9')
                number_mode = 1;
            else {
                number_mode = 0;
                AddELement2Stack(&st, temp);
            }
        }
    }
    return st;
}
// add_to_string чтобы собрать строку-число, пихаем новую цифру в конец числа
void add_to_string(char s[], char ch)
{
    int find_index = -1;
    for (int i = 0; s[i] != '\0'; i++) {
        find_index = i;
    }
    find_index++;
    s[find_index] = ch;
}

// to_zero очищает строку(мне так удобнее, ошибок не появляется никаких)
void to_zero(char s[])
{
    for (int i = 0; s[i] != '\0'; i++) {
        s[i] = '\0';
    }
}