#include <stdio.h>

// state is an integer boolean that records whether the program is currently inside a word or not

#define IN 1
#define OUT 0

int main()
{
	int c, state;

	state = OUT;
	while((c=getchar()) != EOF)
	{
		if(c == ' ' || c == '\n' || c == '\t')
		{
			if(state == IN)
			{
				putchar('\n');  /* finish the word */
				state = OUT;
			}
		}
		else if(state == OUT)
		{
			state = IN; /* beginning of word */
			putchar(c);
		}
		else		   /* inside a word */	
			putchar(c);
	}
}

