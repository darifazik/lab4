/*Файзуллина Дарина Ирековна
 ПИ 1-1
 консольный калькулятор*/
#include<stdio.h>
int main(void){
    double a, b, result;
    int command;
    printf("Введите два числа: ");
    scanf("%lf %lf", &a, &b);

    printf("1 - сложение\n2 - вычитание\n3 - умножение\n4 - деление\n");
    printf("Выберите операцию:\n");
    scanf("%d", &command);
    switch(command){
        case 1:
            result = a + b;
            printf("Результат: %.2lf\n", result);
            break;
        case 2:
            result = a - b;
            printf("Результат: %.2lf\n", result);
            break;
        case 3:
            result = a * b;
            printf("Результат: %.2lf\n", result);
            break;
        case 4:
            if(b != 0){
                result = a / b;
                printf("Результат: %.2lf\n", result);
            } else {
                printf("Ошибка: деление на ноль!\n");
            }
            break;
        default:
            printf("Неверная команда!\n");
    }
    return 0;
}