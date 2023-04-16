#include <unistd.h>

void	print_bits(unsigned char octet)
{
	unsigned char var = octet & 128;
	if (var == 0)
		write(1, "0", 1);
	else
		write(1, "1", 1);	
	var = octet & 64;
	if (var == 0)
		write(1, "0", 1);
	else
		write(1, "1", 1);
	var = octet & 32;
	if (var == 0)
		write(1, "0", 1);
	else
		write(1, "1", 1);
	var = octet & 16;
	if (var == 0)
		write(1, "0", 1);
	else
		write(1, "1", 1);
	var = octet & 8;
	if (var == 0)
		write(1, "0", 1);
	else
		write(1, "1", 1);
	var = octet & 4;
	if (var == 0)
		write(1, "0", 1);
	else
		write(1, "1", 1);
	var = octet & 2;
	if (var == 0)
		write(1, "0", 1);
	else
		write(1, "1", 1);

	var = octet & 1;
	if (var == 0)
		write(1, "0", 1);
	else
		write(1, "1", 1);

}

int main(void)
{
	print_bits(2);
	return(0);
}


