#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int n, i, *ptr;

	printf(" Enter the Total number of vulue \n");
	scanf("%d\n", &n);

	ptr = (int*)malloc(n * sizeof(int));

	for (i = 0; i <= n; i++)
	{
		scanf("%d\n", (ptr + i));
	}

	printf("The value u entered are\n");

	for (i = 0; i <= n; i++)
	{ 
		printf("%d\t", *(ptr +i));
	}

	free(ptr);

}

