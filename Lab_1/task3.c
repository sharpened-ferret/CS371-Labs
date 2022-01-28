# include <stdio.h>
# include <stdlib.h>
# include "fibonacci.h"

int main(int argc, char* argv[]) {
    if (argc > 1) {
        int fib_input = atoi(argv[1]);
        int result = fibonacci(fib_input);
        printf("Fibonacci of %d = %d\n", fib_input, result);
        return 0;
    }
    else {
        printf("Error: Invalid Arguments Supplied\n");
        return 1;
    }
    
}