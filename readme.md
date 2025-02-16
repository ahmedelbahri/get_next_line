# get_next_line

**get_next_line** is a C project that implements a function that reads a line from a file descriptor, one at a time. This project focuses on file handling, memory management, and string manipulation. It is part of the 42 School curriculum.

---

## About

The goal of the **get_next_line** project is to implement a function that reads a line from a file descriptor and returns it as a string. The function should be capable of handling multiple file descriptors at once and returning the content of the next line when called multiple times.

---

## Installation

To install **get_next_line**, follow these steps:

1. Clone this repository:
    ```bash
    git clone https://github.com/ahmedelbahri/get_next_line.git
    cd get_next_line
    ```

2. Compile the library:
    ```bash
    make
    ```

3. Optionally, to remove all compiled objects:
    ```bash
    make clean
    ```

4. To remove the library completely:
    ```bash
    make fclean
    ```

5. To recompile the library after cleaning:
    ```bash
    make re
    ```

---

## Usage

You can use **get_next_line** in your projects by including the `get_next_line.h` header file and linking the library when compiling your code. Example:

```c
#include "get_next_line.h"

int main() {
    int fd = open("file.txt", O_RDONLY);
    char *line;

    while (get_next_line(fd, &line) > 0) {
        printf("%s\n", line);
        free(line);
    }
    close(fd);
    return 0;
}
