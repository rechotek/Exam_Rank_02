#include <stdio.h>

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned int	x = 8;
	unsigned char	res = 0;

	while (x--)
	{
		res = (res << 1) | (octet & 1);
		octet = octet >> 1;
	}
	return (res);
}

int	main(void)
{
	unsigned char bit = 0;
	unsigned char res = reverse_bits((unsigned char)5);

	int x = 8;
	while (x--)
	{
		bit = (res >> x & 1) + 48;
		printf("%c", bit);
	}
}