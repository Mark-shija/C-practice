#include <stdio.h>
 int recursive()
{
	printf("0101");
	return recursive();
}
int main()
{
	recursive();
	return (0);
}

