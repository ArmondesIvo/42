*This project was created as part of curriculum the 42 by iarmondes.*

# Libft - Your First C Library

## Description
The **Libft** project is a fundamental milestone in the Common Core 42 curriculum. The main goal is to recreate a set of functions from the C standard library (libc) and develop additional utility functions from scratch.

While building this library, I gained in-depth practical knowledge in:

- **Memory Management:** Manual memory allocation and deallocation using `malloc` and `free`.

- **Pointer Arithmetic:** Navigation and manipulation of raw memory and string data.

- **Data Structures:** Understanding the underlying logic of arrays and linked lists.

- **Static Libraries:** Learning how to bundle code into a `.a` file for efficient reuse.

## Instructions

### Compilation
The project includes a `Makefile` that conforms to standard 42. Use the following commands:

- `make`: Compiles all source files and creates the `libft.a` library.

- `make clean`: Deletes the object files (`.o`).

- `make fclean`: Deletes the object files and the `libft.a` library.

- `make re`: Recompiles the entire project (fclean + make).

### Usage
To integrate this library into your C projects:

1. Compile the library by pasting the following command into the terminal:

`make`

2. Include the header in your source code:

#include "libft.h"

3. Compile your project by linking the library:

`cc -Wall -Wextra -Werror main.c libft.a`

## Detailed Library Description
The library is divided into main categories:

- **Libc Functions:** Reimplementations of standard functions such as `ft_strlen`, `ft_memset`, `ft_strchr`, etc.

- **Additional Functions:** Utilities for string and memory manipulation, such as `ft_split`, `ft_strjoin`, and `ft_itoa`.

- **I/O:** Functions for writing to file descriptors, such as `ft_putstr_fd`.

## Resources

### References
- [C Library Reference (cppreference.com)](https://en.cppreference.com/w/c/library)
- [GNU C Library Documentation](https://www.gnu.org/software/libc/manual/)

### Use of AI
In this project, I used **Gemini (Google AI)** as a technical tutor.

- **Tasks performed:** Explanation of memory concepts (such as the behavior of pointers in `ft_strnstr`), assistance in correcting and verifying the code logic, and tests to verify the functionality of the function.
