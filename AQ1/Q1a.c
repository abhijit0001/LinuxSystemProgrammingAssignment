#include<stdio.h>

int main(void)
{
	#ifdef DEBUG_ENABLED
	printf("This is a String");
	#else
	printf("This is a different string");
	#endif
		
	return 0;
}

