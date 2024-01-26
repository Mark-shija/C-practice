#include <stdio.h>

int add(int a, int b)
{
	return (a + b);
}

int main()
{
	int result;
	int (*add_pointer)(int, int) = &add;

	result = add_pointer(10,10);

	printf("result:%d\n", result);

	return (0);
}
