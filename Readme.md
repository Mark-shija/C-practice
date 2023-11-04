# Author: Maxius Emmanuel Shija
# published 02 Nov 2023

#### pointers in C
* pointers are variable that store memory addresses. pointer are used to:
* Dynamic memory allocation( when using malloc function).
* Accessing value of variables and
* Working with complex Data structure like linked lists and tree

##  Declaring pointer Variable in C
we declare a pointer variable by specifying the data type it points to, followed by an asterisk (*), and then the variable name. For example

* int age;

* int *ptr;
from definition above we declared an int variable age and pointer variable pointing to int age named ptr.

age = 10;

ptr = &age;// this assign address of variable age to variable ptr, i.e ptr now points to age

/* printf("address of variable age %p\n", ptr)*/

/* Deferrencing 
 * since variable age is pointed by ptr we can now access the value stored in it, 
 * we can also modify the value if we want.
 * we write arsterik * before the pointer variable namme to acces and modify

*/



