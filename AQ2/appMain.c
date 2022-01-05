#include"lib.h"
#include<stdio.h>


int main(void)
{
char *p,*q;
p=StringCreate (10);
 q="Hello";
 
 StringReverse (q);
 
 if(StringDelete(p)) printf("\nstring deleted");
 printf("\nHere is the main program\n");
 return 0;
}







