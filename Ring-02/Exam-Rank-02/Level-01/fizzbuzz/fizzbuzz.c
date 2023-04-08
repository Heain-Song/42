#include <unistd.h>

void	ft_putnbr(int nbr)
{
	if (nbr >= 0 && nbr <= 9)
	{
	}
	if (nbr > 9)
	{
		
	}		
}

int main (void)
{
	int i;
	int nbr;

	i = 1;
	while (i <= 100)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			write (1, "fizzbuzz", 9);
		else if (i % 3 == 0)
			write (1, "fizz", 5);
		else if (i % 5 == 0)
			write (1, "buzz", 5);
		else
			ft_putnbr(i);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}

/* 
Assignment name  : fizzbuzz
Expected files   : fizzbuzz.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that prints the numbers from 1 to 100, each separated by a
newline.

If the number is a multiple of 3, it prints 'fizz' instead.

If the number is a multiple of 5, it prints 'buzz' instead.

If the number is both a multiple of 3 and a multiple of 5, it prints 'fizzbuzz' instead.

Example:

$>./fizzbuzz
1
2
fizz
4
buzz
fizz
7
8
fizz
buzz
11
fizz
13
14
fizzbuzz
[...]
97
98
fizz
buzz
$>



Q1. How can I make the program write the number from 1 to 100 with the write function?
	Error note: expected ‘const void *’ but argument is of type ‘int’

	Below is the proto type of write function in C:
	ssize_t write(int fd, const void *buf, size_t count);
	- write() writes up to count bytes from the buffer starting at buf to the file referred to by the file descriptor fd.

Q2. It seems like I put 'int' instead of 'const void *'.
	->

	A1.
	- use ASCII
	- how about ft_putnbr? recursive call!
*/
