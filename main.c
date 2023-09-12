#include <stdio.h>

int main() {
    double num1, num2;
    char operator;

    printf("Enterer un operator (+, -, *, /, %%): ");
    scanf("%c", &operator);

    printf("Enterer deux nombre: ");
    scanf("%lf %lf", &num1, &num2);

    switch(operator) {
        case '+':
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
            break;
        case '/':
            if(num2 != 0)
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
            else
                printf("Cannot divide by zero.\n");
            break;
        case '%':
            printf("%.2lf %% %.2lf = %.2lf\n", num1, num2, fmod(num1, num2));
            break;
        default:
            printf("Invalid operator.\n");
    }

    return 0;
}
