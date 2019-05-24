//https://stackoverflow.com/questions/35789676/counting-characters-via-c-book



#include<stdio.h>

int main()
{
	long nc;

	nc=0;
	while(getchar() != EOF)
		++nc;
	printf("%ld\n", nc);
}

