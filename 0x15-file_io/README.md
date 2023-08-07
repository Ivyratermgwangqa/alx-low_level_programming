# File Operations Functions

This project contains several functions for performing file operations in C.

## Table of Contents

- [read_textfile](#read_textfile)
- [create_file](#create_file)
- [append_text_to_file](#append_text_to_file)
- [cp](#cp)

## read_textfile

```c
ssize_t read_textfile(const char *filename, size_t letters);
```

This function reads a text file and prints it to the POSIX standard output. It takes the filename as input and the number of letters to read and print. The function returns the actual number of letters it could read and print. If the file cannot be opened or read, or if there are any issues with writing or not writing the expected amount of bytes, it returns 0.

## create_file

```c
int create_file(const char *filename, char *text_content);
```

The `create_file` function creates a file with the specified filename. It also writes the provided `text_content` to the file. The function returns 1 on success and -1 on failure. The created file has the permissions `rw-------`. If the file already exists, it is truncated. If the filename is NULL, the function returns -1. If the `text_content` is NULL, an empty file is created.

## append_text_to_file

```c
int append_text_to_file(const char *filename, char *text_content);
```

The `append_text_to_file` function appends the `text_content` to the end of the file specified by `filename`. It returns 1 on success and -1 on failure. If the file does not exist, it does not create a new file. If the filename is NULL, the function returns -1. If the `text_content` is NULL, nothing is added to the file. If you do not have the required permissions to write the file, it returns -1.

## cp

The `cp` program is designed to copy the content of one file to another file.

Usage: `cp file_from file_to`

- If the number of arguments is not correct, the program exits with code 97 and prints "Usage: cp file_from file_to" on the POSIX standard error.
- If the `file_to` already exists, it is truncated.
- If the `file_from` does not exist or cannot be read, the program exits with code 98 and prints "Error: Can't read from file `NAME_OF_THE_FILE`" on the POSIX standard error.
- If it cannot create the `file_to` or fails to write to it, the program exits with code 99 and prints "Error: Can't write to `NAME_OF_THE_FILE`" on the POSIX standard error.
- If it cannot close a file descriptor, the program exits with code 100 and prints "Error: Can't close fd `FD_VALUE`" on the POSIX standard error.

The created file has the permissions `rw-rw-r--`. The program reads 1,024 bytes at a time from `file_from` to minimize system calls and uses a buffer. It is compiled on Ubuntu 20.04 LTS using gcc with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`.

