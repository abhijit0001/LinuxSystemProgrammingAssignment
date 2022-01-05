#include<stdio.h>

int main(void)
{
	int x = 1;
  	char *y = (char*)&x;
  	char ch=*y+48;
	
	if(ch=='1')
	{printf("Big Endian");}
	else if(ch=='0')
	{printf("Little Endian");}
	else
	printf("Something Phisy");
		
	return 0;
}

