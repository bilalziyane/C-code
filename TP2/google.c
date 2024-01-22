#include <stdio.h>

int main(void) {
  int a, b; //The two inputs
  char operation; //Variable to read operation

  printf("Enter the operator(+,-,*,/):");
  scanf("%c", &operation);

  printf("Enter the two inputs:\n");
  scanf("%d%d", &a, &b);
switch (operation) { // Case for every operation.
  case '+':
    printf("Addition of %d and %d is %d\n", a, b, a + b);
    break;
  case '-':
    printf("Subtraction between %d and %d is %d\n", a, b, a - b);
    break;
  case '*':
    printf("Multiplication between %d and %d is %d\n", a, b, a * b);
    break;
  case '/':
    printf("Dividing %d by %d gives %d\n", a, b, a / b);
    break;
  default:
    printf("%c is Not a valid operator\n", operation);
  }
  
  return 0;
}
