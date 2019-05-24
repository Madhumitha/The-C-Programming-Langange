#include <stdio.h>

//Count blanks, tabs and newlines

int main()
{
int c, count_space=0, count_tab=0, count_newline=0;
while((c = getchar()) != EOF)
{
	if(c ==' ')
          ++count_space;
	else if(c == '\t')
	  ++count_tab;
        else if(c == '\n')
	  ++count_newline;
}
printf("%d ,%d, %d \n", count_space, count_tab, count_newline);
}
