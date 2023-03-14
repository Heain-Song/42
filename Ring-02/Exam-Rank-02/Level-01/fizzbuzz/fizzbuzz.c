#include <unistd.h>

void *ft_putnbr(int nbr)
{
	if (nbr)

}







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

	Below is the proto type of write function in C:
	ssize_t write(int fd, const void *buf, size_t count);
	- write() writes up to count bytes from the buffer starting at buf to the file referred to by the file descriptor fd.

	Q1.1 It seems like I put 'int' instead of 'const void *'.
	->

	A1.
	- use ASCII
	- how about ft_putnbr? recursive call!
*/
