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

This repository contains the following projects:

- [libholberton.a](./libholberton.a): Creating a static library called `libholberton.a` containing various C functions.

- [create_static_lib.sh](./create_static_lib.sh): Writing a shell script that creates a static library called `liball.a` from all the `.c` files in the current directory.

- [holberton.h](./holberton.h): Creating a header file containing the prototypes of all the functions in the `libholberton.a` and `liball.a` libraries.

## Getting Started

To get started with these projects, simply navigate to the project directory and view the contents of the `README.md` file for instructions on how to complete each task.

## Usage

The `libholberton.a` library can be used by linking it with your C program using the `-l` flag followed by the library name:

gcc -Wall -pedantic -Werror -Wextra main.c -L. -lholberton -o my_program


Similarly, the `liball.a` library can be used in the same way:

gcc -Wall -pedantic -Werror -Wextra main.c -L. -lall -o my_program


## Contributing

Contributions to this repository are welcome. If you find any issues or have suggestions for improvement, please open an issue or submit a pull request.

## Author

- [chillpls](https://github.com/chillpls)
