#include <unistd.h>

/**
 * main - entry point
 *
 * Description: A C program that prints a qoute using write function
 *	ssize_t write(int fd,const void *buf,size_t count)
 *
 * Return: 1 (error)
*/

int main(void)
{
	char qoute[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, qoute, 59);
	return (1);
}
