#include <stdio.h>
int main()
{
	int c;
	while((c = getchar()) != EOF)
	{
		if(c == '\t')
		{
			while((c=getchar()) == '\t');
			putchar('\t');
			if(c == EOF)
				break;
		}
		else if(c == '\b')
		{
			while((c=getchar()) == '\b');
			putchar('\b');
			if(c == EOF)
				break;
		}
		else if(c == '\\')
		{
			while((c=getchar()) == '\\');
			putchar('\\');
			if(c == EOF)
				break;
		}
		putchar(c);
	}
}
