#include "main.h"
void *malloc_checked(unsigned int b)
{
	void *assign;
	assign = malloc(b);
	if (assign == NULL )
		exit(98);
	return(assign);
}
