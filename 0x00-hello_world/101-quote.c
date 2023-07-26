#include <unistd.h>
/**
 * main - write to std out without printf or put
 * Return: return 1 on success else 0
 */
int main(void)
{
	const char *message =
		"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, message, 59);

	return (1);
}
