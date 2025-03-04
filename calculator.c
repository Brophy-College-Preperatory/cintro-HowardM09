// Here is the calculator Code:
// Please include: subtraction, multiplication, and division.
// If you are confused with the code, do not be afraid to google
// the functions, data types, the int main(void), format specifiers etc.

int main(void) {
  int x;
  int y;

  printf("Type your first number: ");
  scanf("%i", &x);
  printf("\nType your second number: ");
  scanf("%i", &y);

  printf("\nThe first number is %i and the second number is %i", x, y);

  int difference = x - y;
  printf("\n\nThe difference of the numbers is %i", difference);

  int quotient = x / y;
  printf("\n\nThe quotient of the numbers is %i", quotient);

  // always return 0; at the end of the main function
  return 0;