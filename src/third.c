#include <stdio.h>
#include <stdlib.h>

typedef void (*Execute)(double n1, double n2);

typedef struct
{
    char operation;
    Execute exec;
} DoMath;

void Sum(double n1, double n2)
{
    printf("%lf + %lf = %lf\n", n1, n2, n1 + n2);    
}

void Subtract(double n1, double n2)
{
    printf("%lf - %lf = %lf\n", n1, n2, n1 - n2);
}

void Divide(double n1, double n2)
{
    printf("%lf / %lf = %lf\n", n1, n2, n1 / n2);
}

void Multiply(double n1, double n2)
{
    printf("%lf * %lf = %lf\n", n1, n2, n1 * n2);
}

void Power(double n1, double n2)
{
    double result = 1;
    for (int i = 1; i <= n2; i++)
        result *= n1;

    printf("%lf ^ %lf = %lf\n", n1, n2, result);
}

int main()
{
    DoMath do_math[] = 
    {
        {.operation = '+', .exec = Sum},
        {.operation = '-', .exec = Subtract},
        {.operation = '/', .exec = Divide},
        {.operation = '*', .exec = Multiply},
        {.operation = '^', .exec = Power}
    };

    int do_math_items = sizeof(do_math) / sizeof(do_math[0]);

    double number1, number2, result;
    char operation;
    printf("Entre com o 1º número: ");
    scanf("%lf", &number1);
    getchar();
    printf("Entre com a operação: ");
    scanf("%c", &operation);
    printf("Entre com o 2º número: ");
    scanf("%lf", &number2);

    for(int i = 0; i < do_math_items; i++)
    {
        if(operation == do_math[i].operation)
        {
            do_math[i].exec(number1, number2);
            return 0;
        }
    }

    printf("Operação não permitida\n");

    return 0;
}