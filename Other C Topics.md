# Other C Topics

This chapter presents additional topics not ordinarily covered in introductory courses.

## Using Command-Line Arguments

On many systems, it's possible to pass arguments to main from a command line by including parameters `int argc` and `char *argv[]` in the parameter list of main. Parameters `argc` receives the number of command-line arguments that the user has entered. Parameter `argv` is an array of strings in which the actual command-line arguments are stored. Common uses of command-line arguments include passing options to a program and passing filenames to a program.

