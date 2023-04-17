# 0x09-static_libraries

This repository contains the projects completed as part of the "0x09-static_libraries" section of the ALX Low-Level Programming curriculum. Each project contains various tasks designed to reinforce the concepts covered in the curriculum.

## Table of Contents

- [Description](#description)
- [Projects](#projects)
- [Getting Started](#getting-started)
- [Usage](#usage)
- [Contributing](#contributing)
- [Author](#author)

## Description

The "0x09-static_libraries" section of the ALX Low-Level Programming curriculum is designed to teach students about creating and using static libraries in C.

## Projects

### 0. A library is not a luxury but one of the necessities of life

- A static library called `libholberton.a` containing various C functions.

### 1. Without libraries what have we? We have no past and no future

- A script called `create_static_lib.sh` that creates a static library called `liball.a` from all the `.c` files in the current directory.

### 2. Either write something worth reading or do something worth writing

- A blog post that explains the difference between static and dynamic libraries in C.

## Getting Started

To get started with these projects, simply navigate to the project directory and view the contents of the `README.md` file for instructions on how to complete each task.

## Usage

### Using `libholberton.a`

To use the `libholberton.a` library, you need to compile your C program with the library and include its header file in your code. Here's an example:

gcc -Wall -Werror -Wextra -pedantic main.c -L. -lholberton -o my_program


In this example, `main.c` is your C file that uses the functions from the library. `-L.` specifies the directory where the library is located (the current directory in this case). `-main` links your program with the `liball.a` library. `-o my_program` specifies the name of the output file.

### Using `liball.a`

To use the `liball.a` library, you can follow the same steps as above, but replace `-lholberton` with `-lall`:

gcc -Wall -Werror -Wextra -pedantic main.c -L. -lall -o my_program


## Contributing

Contributions to this repository are welcome. If you find any issues or have suggestions for improvement, please open an issue or submit a pull request.

## Author

- [chillpls](https://github.com/chillpls)
