# C File Processing

Storage of data in variables and arrays is temporary - such data is lost when a program terminates. **Files** are used for long-term retention of data. Computers store files on secondary storage devices, such as hard drives, solid-state drives, flash drives and DVDs. In this chapter, we explain how data files are created, up-dated and processed by C programs. We consider both sequential-access and random-access file processing.

## Files and Streams

C views each file simply as a sequential strem of bytes. Each file ends either with an end-of-file marker or at a specific byte number recorded in a system-maintained, administrative data structure - this is determined by each platform and is hidden from you.

**Standard Streams in Every Program** When a file in opened, a stream is associated with it. Three streams are automatically opened when program execution begins:

-   the standard input (which receives input from the keyboard),
-   the standard output (which displays output on the screen) and
-   the standard error (which displays error messages on the screen).

**Communication Channels** Streams provide communication channels between files and programs. For example, the standard input stream enables a program to read data from the keyboard, and the standard output stream enables a program to print data on the screen.

**FILE Structure** Opening a file returns a pointer to a FILE structure (defined in `<stdion.h>`) that contains information used to process the file. Each array element contains a file control block (FCB) - information that the operating system uses to administer a particular file. The standard input, standard output and standard error are manipulated using `stdin`, `stdout` and `stderr`.

**File-Processing Function `fgetc`** The standard library provides many functions for reading data from files and for writing data to files. Function `fgetc` reads one character from a file. Function `fgetc` receives as an argument a FILE pointer for the file from which a character will be read. The call `fgetc(stdin)` reads one character from `stdin` - the standard input.

**File-Processing Function `fputc`** Function `fputc`, writes one character to a file. Function `fputc` receives as arguments a character to be written and a pointer for the file to which the character will be written. The function call `fputc('a', stdout)` writes the character 'a' to stdout - the standard output

**Other File-Processing Functions** Several other functions used to read data from standard input and write data to standard output have similarly named file-processing functions. The `fgets` and `fputs` functions. for example, can be used to read a line from a file and write a line to a file, respectively.

## Creating a Sequential-Access File

C imposes no structure on a file. Thus, notions  such as a record of a file are not part of the C language.

*Example:* `files/seqfile.c`

The example creates a simple sequential-access file that might be used in an accounts receivable system to keep track of the amounts owed by a company'scredit clients.

**Pointer to a FILE** In the example, `cfPtr` is a pointer to a FILE structure. A C program administers each file with a separate FILE structure. Each open file must have a separately declared pointer  of type FILE that's used to refer to the file.

**Using fopen to Open the file**In the example `fopen` names the file - "clients.txt" - to be used by the program and establishes a "line of communication" with the file. The file pointer `cfPtr` is assigned a pointer to the FILE structure for the file opened with `fopen`.

The file opene mode `"w"` indicates that the file is to be opened for writing.

**Using `fprintf` to Write to the File** In the example, writes data to the file `clients.txt`. The data may be retrieved later by a program designed to read the file. Function `fprintf`is equivalent to `printf` except that `fprintf` also receives as an argument a file pointer for the file to which the data will be written.

**Using `fclose` to Close the File** After the users enters end-of-file, the program close the `clients.txt` file with `fclose` and terminates.

**File Open Modes**

|Mode | Description                                           |
|-----|-------------------------------------------------------|
| `r` | file for read                                         |
| `w` | Create a file for write                               |
| `a` | Open o create a file for write at the end of the file |
| `r+`| Open an existing file for update                      |

## Reading Data from a Sequential-Access File

Data is stored in files so that it can be retrived for processing when needed.

*Example:* `files/seqread.c`

**Resetiing the File Position Pointer**

    rewind(cfPtr)