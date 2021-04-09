#include <stdio.h>
#include <stdlib.h>

int main()
{
    double number1, number2, result;
    char operation;
    printf("Entre com o 1º número: ");
    scanf("%lf", &number1);
    getchar();
    printf("Entre com a operação: ");
    scanf("%c", &operation);
    printf("Entre com o 2º número: ");
    scanf("%lf", &number2);

    if(operation == '+')
    {
        result =  number1 + number2;
        printf("%lf + %lf = %lf\n", number1, number2, result);
    }

    else if(operation == '-')
    {
        result =  number1 - number2;
        printf("%lf - %lf = %lf\n", number1, number2, result);
    }

    else if(operation == '/')
    {
        result =  number1 / number2;
        printf("%lf / %lf = %lf\n", number1, number2, result);
    }

    else if(operation == '*')
    {
        result =  number1 * number2;
        printf("%lf * %lf = %lf\n", number1, number2, result);
    }

    else if(operation == '^')
    {   
        result = 1;
        for(int i = 1; i <= number2; i++)
            result *= number1;
        // result =  number1 * number2;
        printf("%lf ^ %lf = %lf\n", number1, number2, result);
    }

    else 
        printf("Operação não permitida\n");

    return 0;
}