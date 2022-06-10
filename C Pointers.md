# C pointers

One of the most powerful features of the C programming language is **pointer**.

## Pointer Variable Definitions and Initialization

Pointers are variables whose values are *memory addresses*. Normally, a variable directly contains a specific value. A pointer, however, contains an address of a variable that contains a specific value. In this sense, a variable name directly references a value, and a pointer indirectly references a value. Refrencing a value through a pointer is called indirection.

**Declaring Pointers**. Pointers, like all variables, must be defined before they can be used. The definition

    int *countPtr, count;

specifies that variable `countPtr` is of type `int` (a pointer to an integer) and is read (right to left), "`countPtr` is a poiter to `int`" or "`countPtr` points to an object of type `int`". Also, the variable `count` is defined to be a `int`, *not* a pointer to an `int`. The `*` applies *only* to `countPtr` in the definition. Pointer can be defined to point to objects of any type.

**Initializing and Assigning Values to Pointers**. Pointers should be initialized when they're defined, or they can be assigned a velue. A pointer may be initialized to `NULL`, `0` or an address. `NULL` is a symbolic constant defined in the `<stddef.h>` header (and several other headers, such as `<stdio.h>`). The value `0` is the only integer value that can be assigned directle to a pointer variable.

## Pointer Operators

**The Address (`&`) Operator**. The `&`, or address operator, is a unary operator that returns the address of its operand. Example:

    int y = 5;
    int *yPtr;

the statement

    yPtr = &y;

assgns the address of the variable `y` to the pointer variable `yPtr`.

**The Indirection `*` Operator**.  The unary `*` operator, commonly referred to as the indirection operator or dereferencing operator, returns the value of the object to which its operand (a poiter) points. For example, the statement:

    printf("%d", *yPtr);

prints the value of variable `y` (5). Using `*` in this manner is called dereferencing a pointer.

**Demonstrating th `&` and `*` Operators**. The `pintf` conversion specifier `%p` outputs the memory location as a hexadecimal integer on most platforms.

*Example:* `pointer/addressM.c`

Int the example output, notice that the address of `a` and the value of `aPtr` are identical in the output, thus confirming that the address of `a` is indeed assigned to the pointer variable `aPtr`. The `&` and `*` operators are complements of one another.

## Passing Arguments to Functions by Reference

There are two ways to pass arguments to a function, **pass-by-value** and **pass-by-reference**. However, all arguments in C are passed by value.

**Use `&` and `*` to Accomplish Pass-By-Reference**. In C, you use pointers and the indirection operator to accomplish pass-by-reference.

**Pass-By-Value**. The program, pass the variable `number` by value to function `cubeByValue`. The cubeByValue function cubes its argument and passes the new value back to `main` using a `return` statement. The new value is assgned to `number` in `main`.

*Example:* `pointer/cubeByValue.c`

**Pass-By-Reference**

Example passes the variable `number` by reference, the address of `number` is passed to function `cubeByReference`. Function `cubeByReference` takes as a parameter a pointer to an `int` called `nPtr`. The function dereferences the pointer and cubes the value to which `nPtr` points, then assigns the result to `*nPtr` (which is really `number` in `main`), thus changing the value of `number` in `main`.

*Example:* `pointer/cubeByReference.c`

## Using the const Qualifie with Pointers

The **const qualifier** enable you to inform the compiler that the value of a particular variable should not be modified.