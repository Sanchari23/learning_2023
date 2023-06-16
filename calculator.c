#include <stdio.h>

float calculator(float num1, char operator, float num2)
{
    float result;
    switch (operator)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        result = num1 / num2;
        break;
    default:
        printf("Invalid operator!\n");
        result = 0;
        break;
    }
    return result;
}

int main()
{
    float a, b;
    char operator;
    float result;

    printf("Enter Number1: ");
    scanf("%f", &a);

    printf("Enter the operator: ");
    scanf(" %c", &operator);

    printf("Enter Number2: ");
    scanf("%f", &b);

    result = calculator(a, operator, b);

    printf("Result: %.2f\n", result);

    return 0;
}
