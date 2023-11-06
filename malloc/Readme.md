# Dynamic Memory Allocation
# Publisher: Maxius Emmanuel Shija
# Date: Nov 2023

## Definition of a concept

* Dynamic Memory Allocation in C it allows you to create a data structure like array and linked list whose size can be determined during runtime.

* In C dynamic Memory Allocation is achieved by using functions found in <stdlib.h> i.e malloc(), calloc(), realloc(), and free().

* malloc(size_t size): allocates memory block of specified size in bytes and return base address of a pointer variable.

* dont forget to free the memory block when done to avoid memory leakage since the program will continue to consume memory.   
