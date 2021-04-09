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

    switch(operation)
    {
        case '+':
            result =  number1 + number2;
            printf("%lf + %lf = %lf\n", number1, number2, number1 + number2);
            break;

        case '-':
            result =  number1 + number2;
            printf("%lf - %lf = %lf\n", number1, number2, number1 - number2);
            break;

        case '/':
            result =  number1 + number2;
            printf("%lf / %lf = %lf\n", number1, number2, number1 / number2);
            break;

        case '*':
            result =  number1 + number2;
            printf("%lf * %lf = %lf\n", number1, number2, number1 * number2);
            break;

        case '^':
            result = 1;
            for(int i = 1; i <= number2; i++)
                result *= number1;

            printf("%lf ^ %lf = %lf\n", number1, number2, result);
            break;

        default:
            printf("Operação não permitida\n");

    }        

    return 0;
}