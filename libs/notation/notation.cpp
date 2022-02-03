#include "notation.h"

#include "stdio.h"
#include "stdlib.h"
#include "string.h"

#define N 100
// to_notation функция, принимающая строку-пример и возвращающая стек с обратной польской записью
Stack to_notation(char ex[])
{
    Stack expression;
    Stack st;
    char temp[N] = "";
    int number_mode = 0;
    // number_mode нужна, поскольку числа могут содержать больше одной цифры. если 0, значит число уже передано в стек
    for (int i = 0; ex[i] != '\0' && i < N; i++) {
        if (number_mode == 0)
            to_zero(temp);

        if (ex[i] == '(') {
            strcpy(temp, "(");
            AddELement2Stack(&st, temp);
        } else if (ex[i] >= '0' && ex[i] <= '9') {
            add_to_string(temp, ex[i]);

            if (ex[i + 1] >= '0' && ex[i + 1] <= '9')
                number_mode = 1;
            else {
                number_mode = 0;
                AddELement2Stack(&expression, temp);
                to_zero(temp);
            }
        } else if (ex[i] == '+' || ex[i] == '/' || ex[i] == '*' || ex[i] == '^' || ex[i] == '-') {
            int ex_priority = get_priority(ex[i]);
            char top[N] = "";

            PopElementStack(&st, top);

            if (top[0] != '\0')
                AddELement2Stack(&st, top);
            int top_priority = get_priority(top[0]);
            if (StackIsEmpty(&st) == 1) {
                char t[N] = {0};
                t[0] = ex[i];
                AddELement2Stack(&st, t);
            } else if (StackIsEmpty(&st) == 0 && top_priority < ex_priority) {
                char t[N] = {0};
                t[0] = ex[i];
                AddELement2Stack(&st, t);
            } else if (StackIsEmpty(&st) == 0 && top_priority >= ex_priority) {
                while (StackIsEmpty(&st) == 0 && top_priority >= ex_priority) {
                    PopElementStack(&st, top);
                    AddELement2Stack(&expression, top);
                    int top_priority = get_priority(top[0]);
                }
                char t[N] = {0};
                t[0] = ex[i];
                AddELement2Stack(&st, t);

            }
        } else if (ex[i] == ')') {
            char top[N] = "";
            while (top[0] != '(') {
                PopElementStack(&st, top);
                AddELement2Stack(&expression, top);
            }
        }
    }
    char top[N] = "";
    PopElementStack(&st, top);
    while (top[0] != '\0') {
        AddELement2Stack(&expression, top);
        PopElementStack(&st, top);
    }
    return expression;
}

// get_priority по символу получаем число, равное приоритету операции
int get_priority(char temp)
{
    if (temp == '(' || temp == ')')
        return 1;
    else if (temp == '+' || temp == '-')
        return 2;
    else if (temp == '*' || temp == '/' || temp == '^')
        return 3;
    else
        return -1;
}

// add_to_string чтобы собрать строку-число, пихаем новую цифру в конец числа
void add_to_string(char s[], char ch)
{
    int find_index = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        find_index++;
    }
    // printf("hmm: %d %s\n", find_index, s);
    s[find_index] = ch;
}

// to_zero очищает строку(мне так удобнее, ошибок не появляется никаких)
void to_zero(char s[])
{
    for (int i = 0; i < N; i++) {
        s[i] = '\0';
    }
}