---
# 0x1C. C - Makefiles
## alx-low_level_programming - Makefiles

This repository contains a set of Makefiles and a Python script as part of the ALX Low Level Programming curriculum.

## Task 0: 0-Makefile

Create the first Makefile with the following specifications:

- Name of the executable: school
- Rule: all
- The `all` rule builds the executable
- Variables: None

Example usage:
```bash
make -f 0-Makefile
```

## Task 1: 1-Makefile

Enhance the Makefile by introducing variables `CC` and `SRC`. The `all` rule should still build the executable.

Example usage:
```bash
make -f 1-Makefile
```

## Task 2: 2-Makefile

Create a more useful Makefile by adding variables `OBJ` and `NAME`. The `all` rule should recompile only the updated source files without having a list of all `.o` files.

Example usage:
```bash
make -f 2-Makefile
```

## Task 3: 3-Makefile

Build on the previous Makefile and introduce additional rules: `clean`, `oclean`, `fclean`, and `re`. These rules should handle cleaning and recompiling the source files.

Example usage:
```bash
make -f 3-Makefile
```

## Task 4: 4-Makefile

Create a complete Makefile with additional variable `CFLAGS` to include compiler flags. The rules `all`, `clean`, `oclean`, `fclean`, and `re` should be implemented.

Example usage:
```bash
make all -f 4-Makefile
```

## Task 5: 5-island_perimeter.py

Implement a Python function `island_perimeter` that calculates the perimeter of the island described in a grid.

Example usage:
```bash
./5-main.py
```

## Task 6: 100-Makefile

Create an advanced Makefile with more features and constraints. It includes variables `CC`, `SRC`, `OBJ`, `NAME`, `RM`, and `CFLAGS`. The rules `all`, `clean`, `oclean`, `fclean`, and `re` should be implemented with specific limitations.

Example usage:
```bash
make -f 100-Makefile
```

Feel free to explore each task's directory for detailed implementations.

---
