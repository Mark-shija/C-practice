#include <stdio.h>

int main()
{
	/* declare variable age*/

	int age;

	/* Declare a pointer variable pointing to age*/

	int *ptr;

	/*Store the address value of variable age into pointer variable*/

	ptr = &age;/* assign address of variable age into ptr

	/* Now u can print the stored address value of int age */

	printf("%p\n", ptr);

	age = 26;

	printf(" value before %d\n", *ptr); /* accsess the value stored at variable age */
	
	*ptr = 35;
	
	printf("value after %d\n", *ptr);
	

	return (0);

}

