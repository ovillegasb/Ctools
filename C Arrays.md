# C Arrays

This introduces data structures. Arrays are data structures consisting of related data items of the same type. Arrays are "static" entities in that they remain the same size throughout program execution.

## Arrays

An array is a group of contiguous memory locations that all have the same type. To refer to a particular location or element in the array, we specify the array's name and the position number of the particular element in the array.

## Defining Araays

Arrays occupy space in memory. You specify the type of each element and the number of elements each array requires so that the computer may reserve the appropriate amouny of memory. The following definition reserves 12 elements for interger array `c`, which has indices in the range 0-11.

    int c[12];

## Arrat Examples

Defining an array and using a loop to set the array's element values

*Example:* `array/array0.c`

Initializing an array in a definition with an initializer list

*Example:* `array/arrayList.c`

Specifying an array's size with a symbolic constant and initializing array elements with calculations

*Example:* `array/arrayPairs.c`

Summing the elements of an array

*Example:* `array/arraySum.c`

## Using Character Araays to Store and Manipulate String

Initializing a character array with a string

    char string1[] = "first";

Iniitalizing a character array with an intializer list of characters

    char string1[] = {'f', 'i', 'r', 's', 't', '\0'};

Accessing the character in a string

    string1[3];

Inputting into a character array, creates a character array capable of storing a string of at most 19 characters and terminating null character.

    char string2[20];

    scanf("%19s", string2);

read a string from the keyboard into string2.

Outputting a character array that represents a string

    printf("%s", string2)

## Static Local Arrays and Automatic Local Arrays

## Passing Arrays to Functions

if array `hourlyTemperatures` has been defined as:

    int hourlyTemperatures[HOURS_IN_A_DAY];

the function call

    modifyArray(hourlyTemperatures, HOURS_IN_A_DAY)

passes array `hourlyTemperatures` and its size to function `modifyArray`.

## Case Study: Computing Mean, Median and Mode Using Arrays

## Multidimensional Arrays

    int b[2][2] = {{1, 2}, {3, 4}}

## Variable-Length Arrays

For cases in which an array's size is not known at compilation time, C has **variable-lenfth arrays** (VLAs) -- that is, arrays whose lengths are defined in terms of expressions evaluated at execution time.

`sizeof` Operator with VLAs. 