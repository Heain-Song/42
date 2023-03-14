#include <unistd.h>

int main (void)
{
	int i;
	char *fizz = "fizz";
	char *buzz = "buzz";
	char *fizzbuzz = "fizzbuzz";

	i = 0;
	while (i < 100)
	{
		if (i / 3 == 0)
			write(1, &fizz, 5);
		else if (i / 5 == 0)
			write(1, &buzz, 5);
		else if (i / 3 == 0 && i / 5 == 0)
			write(1, &fizzbuzz, 1);
		else
			write(1, i, 1);
		write(1, &i, 1);
		i++;
	}
	return (0);
}

/* Q1. How can I make the program write the number from 1 to 100 with the write function?
	Error note: expected ‘const void *’ but argument is of type ‘int’

	Below is the proto type of write function in C.

  	extern ssize_t write (int __fd, const void *__buf, size_t __n) __wur;

	It seems like I put 'int' instead of 'const void *'. What is const void *?

*/
