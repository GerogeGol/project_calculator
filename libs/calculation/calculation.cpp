#include "calculation.h"

#include "stdlib.h"
#include "string.h"
#include "math.h"

// функция сложения двух чисел
double Plus(double num1, double num2)
{
    return num1 + num2;
}

// функция вычитания двух чисел
double Minus(double num1, double num2)
{
    return num2 - num1;
}

// функция умножения двух чисел
double Multiple(double num1, double num2)
{
    return num1 * num2;
}

// функция деления двух чисел
double Division(double num1, double num2)
{
    return num2 / num1;
}

// функция унарного минуса
double unarMinus(double x)
{
    return -x;
}

// функция возведения в степень
double Pow(double num1, double num2)
{
    return pow(num2, num1);
}

// для реализации виртуальной функции
int operation_choosen(const char* var)
{
    char operations[5][100] = {"+", "-", "*", "/", "^"};
    for (int i = 0; i < 5; i++) {
        if (!strcmp(var, operations[i])) {
            return i;
        }
    }
    return -1;
}

double Operation(double num1, double num2, double (*pred)(double, double))
{
    return pred(num1, num2);
}

void Calculation(Stack* stack)
{
    NumericStack result;          // создаем стек, чтобы записывать туда цифры и в последующем результат
    DLNode* node = stack->start;  // начинаем идти с начала полученного стека
    // для виртуальной функции
    double (*funcs[])(double, double) = {
            Plus,
            Minus,
            Multiple,
            Division,
            Pow };

    // пока не достигнем конца в полученном стеке польской нотации
    while (node) {
        // char input[30] = node->item; // берем значение из стека
        char* ptr;                              // указатель на поинтер для функции strtod
        int i = operation_choosen(node->item);  // для работы виртуальной функции
        // проверка на запись вида "-52"
        if (node->item[0] == '-' && node->item[1] >= '0') {
            int count_for_num = 0;
            char num[20] = {0};  // если у числа стоит впереди минус, то проводим над ним UnarMinus
            for (int j = 1; j < strlen(node->item); j++) {
                num[count_for_num++] = node->item[j];
            }
            double toUnarMinusResult;  // записываем рез в эту переменную, затем добавляем в стек result
            toUnarMinusResult = strtod(num, &ptr);
            AddELement2NumStack(&result, unarMinus(toUnarMinusResult));
            node = node->next;  // переход к следующему элементу в обратной польской нотации
            continue;
        } else {
            if (i == -1) {  // если функция оператора возвращает минус один, значит в инпуте число
                AddELement2NumStack(&result, strtod(node->item, &ptr));
            } else {  // если встретили знак, достаем два числа из стека
                double number1 = PopElementNumStack(&result);
                double number2 = PopElementNumStack(&result);
                double after_op = Operation(number1, number2, funcs[i]);  // выполняем операцию
                AddELement2NumStack(&result, after_op);                   // записываем в стек result
            }
        }

        node = node->next;  // переход к следующему элементу в обратной польской нотации
    }

    PrintNumStack(&result);  // печать результата
}