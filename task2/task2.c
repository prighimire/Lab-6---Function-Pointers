#include <stdio.h>
#include <stdlib.h>

/* IMPLEMENT ME: Declare your functions here */
typedef int (*Operations)(int, int);
int add (int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);
int exit_func(int a, int b);


int main (void)
{
	/* IMPLEMENT ME: Insert your algorithm here */
  int a, b, user_input, output;
  a = 6;
  b = 3;
  Operations operation[] = {add, subtract, multiply, divide, exit_func};
	while (1) {
		printf("Operand 'a': %d | Operand 'b': %d\n",a,b);
		printf("Specify the operation to perform (0 : add | 1 : subtract | 2 : Multiply | 3 : divide | 4 : exit): ");
    scanf("%d", &user_input);
    output = operation[user_input](a,b);
    printf("%d\n", output);
	}
	return 0;
}

/* IMPLEMENT ME: Define your functions here */
int add (int a, int b) { printf ("Adding 'a' and 'b'\n"); return a + b; }
int subtract (int a, int b) { printf ("Subtracting 'b' from 'a'\n"); return a - b; }
int multiply (int a, int b) { printf ("Multiplying 'a' and 'b'\n"); return a * b; }
int divide (int a, int b) { 
  if (b==0){
    printf("Error: Cannot divide by Zero");
    return 0;
  }
  printf ("subtracting 'a' by 'b'\n"); 
  return a / b; 
}
int exit_func(int a, int b) {
  exit(0);
}