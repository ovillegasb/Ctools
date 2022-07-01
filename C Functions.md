# C Functions

## Functions

Functions allow you to modularize a program.


## Function Definitions

*Example:* `functions/square.c`

`square` Function Prototype:

    int square(int y); // function prototype

is a function prototype (also called a function declaration).

**Format of a Function Definition**. The format of a function is

    return-value-type function-name(parameter-list)
    {
        statements
    }

## Function Prototype:  Deeper Look

The compiler uses function prototypes to validate function calls.

## Function Call Stack and Stack Frames

To understand how C performs function call, we first need to consider a data structure known as a stack. Think of a stack as analogous to a pile of dishes.

## Headers

Each standard library has a corresponding header containing the function prototypes for all the functions in that library and definitions of various data types and constants needed by those functions.

You can create custom headers. Programmer-defined headers should also use the `.h` filename extension. A programmer-defined header can be included by using the `#include` preprocessor directive. For example, if the prototype for our square function was located in the header `square.h`, we'd include that header in our program by using the following directive at the top of the program:

    #include "square.h"

## Passing Arguments BY Value and By Reference

When arguments are passed by values, a copy of the argument's value is made and passed to the called function. Changes to the copy do not affect an original variable's value in the caller. When an argument is passed by reference, the called alloes the called function to modify the original variable's values.

## Storage Classes

C provides the storage class specifies `autp`, `register`, `extern` and `static`.

**Local Variables**. Only variables can have atutometica storage duration.

**Static Stprage Class**. Keywords `extern` and `static` are used in the declarations of identifiers for variables and functions of static storage duration. Identifiers of static storage duration exist from the time at which the program begins execution until the program terminates.

The following statement declares local variable `count` to be `static` and initializes it to 1.

    static int count = 1;

## Scope Rules

The scope of an identifier is the portion of th program in which the identifier can be reference.

## Recursion

For some types of problems, it's useful to have functions call themselves.

## Recursion vs. Iteration

   - Both iteration and recursion are based on a control statement: Iteration uses an iteration statement; recursion uses a selection statement.
   - 

