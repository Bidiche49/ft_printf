# ft_printf

## Description

`ft_printf` is a custom implementation of the standard `printf` function from the C standard library. The project aims to recreate the behavior of `printf`, allowing formatted output of various data types to the standard output. It serves as an exercise in understanding variadic functions, buffer management, and format parsing.

## Features

- **Basic Conversion Specifiers**: Supports `%c`, `%s`, `%p`, `%d`, `%i`, `%u`, `%x`, and `%X`.
- **Buffer Management**: Efficiently manages memory through buffering techniques to optimize output operations.

## Key Technologies

- **C Programming Language**: Core language used for implementing low-level output formatting functions.
- **Variadic Functions**: Uses `va_list` from `<stdarg.h>` to handle a variable number of arguments.
- **Makefile**: Automates the compilation process and creates the `libftprintf.a` static library.

## Learning Outcomes

- Gained a deeper understanding of variadic functions and how to manage them.
- Developed skills in parsing strings to extract format specifiers and flags.
- Learned efficient buffer management to reduce the number of write operations.

## How to Use

1. Clone the repository:
   ```bash
   git clone https://github.com/Bidiche49/ft_printf
   cd ft_printf
   ```
