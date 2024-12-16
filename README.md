# Freeing Stack Memory in C

This example demonstrates a common error in C: attempting to free memory allocated on the stack.  The `free()` function is designed for dynamically allocated memory (using `malloc`, `calloc`, etc.).  Freeing a pointer to a stack variable leads to undefined behavior and can cause crashes or other unpredictable results.  The solution shows how to correctly handle stack-allocated variables.

## Bug

The `bug.c` file contains the erroneous code attempting to free stack memory.

## Solution

The `bugSolution.c` file shows the corrected code, which removes the incorrect call to `free()`.