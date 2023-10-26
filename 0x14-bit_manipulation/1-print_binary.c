#include "main.h"
/**
 * print_binary - prints the binary representation of a number to the console
 * @n: the number whose binary representation is to be printed
 *
 * Return: none
 */
void print_binary(unsigned long int n) {
  /* Iterate through the bits of n, starting with the most significant bit */
  for (unsigned int i = 31; i >= 0; i--) {
    if ((n >> i) & 1) {
      _putchar('1');
    } else {
      _putchar('0');
    }
  }
}
