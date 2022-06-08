# C tools

*Orlando Villegas*

June 2022

Repository dedicated to store tools and scripts in C. It is used to write notes and examples about C programming.

## Introduction to C Programming

*Example:* `basics/hello.c`

Lines begin with `//`, indicate that these two lines are **comments**. `/*...*/` **multi-line comments** in which everything from `/*` on the first line to `*/` at the end of the last line is a comment.

`#include <stdio.h>` is a directive to the C preprocessor. Lines beginning with `#` are processed by the preprocessor before compilation.This line tells the preprocessor to include the contents of the standard input/output header (`<stdio.h>`) in the program.

The `main` function `int main( void )` is a part of every C program. The parentheses after main indicate that main is a program building black called a function. C programs contain one or more functions, one of which must be `main`.  Functions can `return` information. The keyword `int` to the left of `main` indicates that `main` "returns" an integer (whole-number) value.

Functions also can receive information when they're called upon to execute. The `void` in parentheses here means that main does not receive any information.

A left brace, `{`, begins the **body** of every function. A corresponding right brace ends each function. This pair of braces and the portion of the program between the braces is called a *block*. The block is an important program unit in C.

An output statement `printf("Welcome to C!\n");` instructs the computer to perform an **action**, namely to print on the screen the string of characters marked by the quotation marks. A strinf is sometimes called a character string, a message or a literal. The entire line, including the `printf` function (the `f` stands for "formatted"), its argument within the parentheses and the semicolon (;), is called a statement. Every statement must end with a semicolon (also known as the statement terminator).

Notice that the characters `\n` were not printed on the screen. The backslash `\` as used here is called an escape character. It indicates that printf is supposed to do something out of the ordinary. The escape sequence `\n` means newline. Some common escape sequences:

| Escape sequence | Description    |
|-----------------|----------------|
| `\n`            | Newline        |
| `\t`            | Horizontal tab |
| `\a`            | Alert          |
| `\\`            | Backslash      |
| `\"`            | Double quote   |


*Example:* `basics/sum.c`

Our next program use the Standard Library function `scanf` to obtain two integers typed by a user at the keyboard, computes the sum of these values and prints the result using `printf`.

    int val1;
    int val2;
are **definitions**. The names `val1` and `val2` are the names of variables - locations in memory where values can be stored for use by a program. These definitions specify that variables `val1` and `val2` are of type `int`.

All variables must be defined with a name and a data type *before* they can be used in a program.

The preceding definitions could be combined into a single definition as follows: `int val1, val2;`

`scanf("%d", &val1);`. Uses `scanf` to obtain a value from the user. The function reads from the standard inpu, which is usually the keyboard.

This `scanf` has two arguments, `%d` and `&val1`. The first, the format control string, indicates the type of data should be entered by the user. The second argument of `scanf` begins with an ampersand `&` - called **address operator** - followed by the variable name. The `&`, when combined with the variable name, tells `scanf` the location (or address) in memory at which the variable `val1` is stored.

The assignment statement `sum = val1 + val2;` calculates the total of variables `val1` and `val2` and assigns the result to varable `sum` using the assignment operator `=`.

You can assign a value to a variable in its definition - this is known as initializing the variable. For example: `int sum = val1 + val2;` are combined into the statement which adds `val1` and `val2`, then stores the result in the variable `sum`.

## Memory Concepts

Variable name such as `val1`, `val2` and `sum` actually correspond to locations in the computer's memory. Every variable has a name, a type and a value.

## Arithmetic in C

| Operator(s) | Operatios(s)   |
|-------------|----------------|
| `( )`       | Parentheses    |
| `*`         | Multiplication |
| `/`         | Division       |
| `%`         | Remainder      |
| `+`         | Addition       |
| `-`         | Subtraction    |
| `=`         | Assignment     |


## Decision Making: Equality and Relational Operators

*Example:* `basics/ifequal.c`

`if` statement allows a program to make a decision based on the truth or falsity of a statement of fact called a **condition**.

    if (num1 == num2){
        printf("%d is equal to %d\n", num1, num2);
    } // end if

Some of the words we've used in C programs like `int`, `if` and `void` are **keywords** or reserved words of the language.

## 