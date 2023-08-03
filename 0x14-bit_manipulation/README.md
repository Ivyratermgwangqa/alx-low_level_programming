0x14-bit_manipulation
---

# Bit Manipulation in C

This README provides an overview of bit manipulation techniques in the C programming language. Bit manipulation is a powerful tool used to manipulate individual bits within integers, allowing for more efficient and optimized code. Understanding these techniques can lead to more compact and faster code execution.

## Table of Contents

- [Introduction](#introduction)
- [Bitwise Operators](#bitwise-operators)
- [Common Bit Manipulation Techniques](#common-bit-manipulation-techniques)
- [Bitwise Shift Operators](#bitwise-shift-operators)
- [Bitwise Manipulation Examples](#bitwise-manipulation-examples)
- [Conclusion](#conclusion)

## Introduction

Bit manipulation involves performing operations at the individual bit level of a binary representation. In C, bitwise operators and shift operators are used to manipulate these individual bits.

## Bitwise Operators

C provides the following bitwise operators:

- `&` (AND): Performs a bitwise AND operation.
- `|` (OR): Performs a bitwise OR operation.
- `^` (XOR): Performs a bitwise XOR (exclusive OR) operation.
- `~` (NOT): Performs a bitwise NOT operation.

## Common Bit Manipulation Techniques

### Setting a Bit

To set a specific bit at position `pos` to 1, you can use the bitwise OR operator `|` with a mask that has only the desired bit set.

```c
int setBit(int num, int pos) {
    return num | (1 << pos);
}
```

### Clearing a Bit

To clear a specific bit at position `pos` to 0, you can use the bitwise AND operator `&` with a mask that has all bits set except the desired bit.

```c
int clearBit(int num, int pos) {
    return num & ~(1 << pos);
}
```

### Toggling a Bit

To toggle a specific bit at position `pos`, you can use the bitwise XOR operator `^` with a mask that has only the desired bit set.

```c
int toggleBit(int num, int pos) {
    return num ^ (1 << pos);
}
```

## Bitwise Shift Operators

C provides two bitwise shift operators:

- `<<` (Left Shift): Shifts the bits of a number to the left by a specified number of positions.
- `>>` (Right Shift): Shifts the bits of a number to the right by a specified number of positions.

## Bitwise Manipulation Examples

Here are a few examples of bit manipulation in C:

```c
#include <stdio.h>

int main() {
    int num = 10; // Binary: 1010

    // Setting the 3rd bit
    int setBitResult = num | (1 << 3); // Result: 1110 (14)

    // Clearing the 2nd bit
    int clearBitResult = num & ~(1 << 2); // Result: 1000 (8)

    // Toggling the 1st bit
    int toggleBitResult = num ^ (1 << 1); // Result: 1000 (8)

    printf("Set Bit: %d\n", setBitResult);
    printf("Clear Bit: %d\n", clearBitResult);
    printf("Toggle Bit: %d\n", toggleBitResult);

    return 0;
}
```

## Conclusion

Bit manipulation in C can lead to more efficient and optimized code by allowing operations at the bit level. Understanding bitwise operators, shift operators, and common manipulation techniques can help you write compact and performant code.

---
