#include"lib.h"



/* Allocates a string of characters and returns base address; if allocation fails, return NULL */
//int StringDelete (char *String);
/* Removes memory allocated for specific String; Returns 1 if deleted, else return 0 */
//void StringReverse (char * String);
/* Reverse the content of “String” */

char *StringCreate (int LengthOfString)
{
	char *pointer = malloc(LengthOfString);
	printf("library function is accessed");
	return pointer;
}

int StringDelete (char *String)
{
	int ret=1;
	free(String);
	if(String==NULL)
	{
	ret=0;
	}
	return ret;
}

void StringReverse (char * String)
{
	int i=0,max=0,end=0;
	char revStr[100];
	while(String[i]!='\0')
	{i++;}
	printf("\nLength of string: %d",i);
	max=i;
	end = max-1;
	printf("\nreverse string is: ");
	for(i=0;i<max;i++){
	revStr[i]=String[end];
	end--;
	}
	printf("%s",revStr);
}



