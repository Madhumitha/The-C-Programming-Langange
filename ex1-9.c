//https://stackoverflow.com/questions/3305735/kr-exercise-1-9-c?rq=1

#include <stdio.h>
int main()
{
	int c;
	while((c = getchar()) != EOF)
	{
		if(c == ' ')
		{
			while((c = getchar()) == ' ');
			putchar(' ');
			if (c == EOF)
				break;
		}
		putchar(c);
	}
}
