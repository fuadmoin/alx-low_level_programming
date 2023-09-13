#include <stdio.h>

/**
 *  main - prints the first 89 Fibonacci numbers
 *  Return: 0
*/
int main(void)
{
int count;
unsigned long first_num = 0, second_num = 1, sum;
unsigned long first_num_half1, first_num_half2;
unsigned long second_num_half1, second_num_half2;
unsigned long half1, half2;
for (count = 0; count < 92; count++)
{
sum = first_num + second_num;
printf("%lu, ", sum);
first_num = second_num;
second_num = sum;
}
first_num_half1 = first_num / 10000000000;
first_num_half2 = first_num % 10000000000;
second_num_half1 = second_num / 10000000000;
second_num_half2 = second_num % 10000000000;
for (count = 93; count < 99; count++)
{
half1 = first_num_half1 + second_num_half1;
half2 = first_num_half2 + second_num_half2;
if (first_num_half2 + second_num_half2 > 9999999999)
{
half1 += 1;
half2 %= 10000000000;
}
printf("%lu%lu", half1, half2);
if (count != 98)
printf(", ");
first_num_half1 = second_num_half1;
first_num_half2 = second_num_half2;
second_num_half1 = half1;
second_num_half2 = half2;
}
printf("\n");
return (0);
}
