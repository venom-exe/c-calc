#include <stdio.h>

int main() {
  char op;
  double first, second;
  printf("Enter an Operator (+, -, *, /): ");
  scanf("%c", &op);
  printf("Enter 2 Operands: ");
  scanf("%lf %lf", &first, &second);

  switch(op) {
    case '+':
      printf("%.lf + %.lf = %.lf", first, second, first + second);
    break;
    case '-':
      printf("%.lf - %.lf = %.lf", first, second, first - second);
    break;
    case '*':
      printf("%.lf * %.lf = %.lf", first, second, first * second);
    break;
    case '/':
      printf("%.lf / %.lf = %.lf", first, second, first / second);
    break;
    default:
    printf("Error! operator isn't correct");
  }
  return 0;
}
